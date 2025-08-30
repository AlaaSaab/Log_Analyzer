#ifndef ANALYSISMODULE_H
#define ANALYSISMODULE_H

#include "ParserModule.h"
#include <vector>
#include <string>

struct Report {
    size_t totalLines = 0;
    // Add more report data as needed (error counts, etc.)
};

class AnalysisModule {
public:
    // Process a log record (increment counters, etc.)
    void addRecord(const LogRecord& record);

    // Generate a summary report after processing is complete.
    Report generateReport() const;

private:
    size_t lineCount_ = 0;
};

#endif // ANALYSISMODULE_H
