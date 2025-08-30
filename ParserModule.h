#ifndef PARSERMODULE_H
#define PARSERMODULE_H

#include <string>

// Define a simple structure to hold parsed log data.
struct LogRecord {
    std::string rawLine;
    // You can add fields like timestamp, log level, etc.
};

class ParserModule {
public:
    // Parse a log line into a LogRecord structure.
    LogRecord parseLine(const std::string& line);
};

#endif // PARSERMODULE_H
