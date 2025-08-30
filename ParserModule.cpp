#include "ParserModule.h"

LogRecord ParserModule::parseLine(const std::string& line) {
    LogRecord record;
    record.rawLine = line;
    // In the future, add regex parsing and field extraction here.
    return record;
}
