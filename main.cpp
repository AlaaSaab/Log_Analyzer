#include "CLI.h"
#include "InputModule.h"
#include "ParserModule.h"
#include "AnalysisModule.h"
#include "OutputModule.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    // Initialize and parse command-line options.
    CLI cli;
    if (!cli.parse(argc, argv)) {
        return 1;
    }
    const auto& inputFiles = cli.getInputFiles();
    
    // Instantiate modules.
    InputModule inputModule;
    ParserModule parserModule;
    AnalysisModule analysisModule;
    OutputModule outputModule;

    // Process each input file.
    for (const auto& filename : inputFiles) {
        if (!inputModule.openFile(filename)) {
            std::cerr << "Error: Unable to open file " << filename << std::endl;
            continue;
        }
        
        std::string line;
        while (inputModule.getNextLine(line)) {
            // Parse the line into a record.
            LogRecord record = parserModule.parseLine(line);
            // Add the record to our analysis.
            analysisModule.addRecord(record);
        }
        
        inputModule.closeFile();
    }
    
    // Generate and output the report.
    Report report = analysisModule.generateReport();
    outputModule.printReport(report);
    
    return 0;
}
