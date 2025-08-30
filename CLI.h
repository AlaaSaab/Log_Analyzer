#ifndef CLI_H
#define CLI_H

#include <string>
#include <vector>

class CLI {
public:
    // Parse command-line arguments. Returns false if parsing fails.
    bool parse(int argc, char** argv);

    // Retrieve list of input file names
    const std::vector<std::string>& getInputFiles() const;

    // You can later add methods for output format, verbosity, etc.
private:
    std::vector<std::string> inputFiles_;
};

#endif // CLI_H
