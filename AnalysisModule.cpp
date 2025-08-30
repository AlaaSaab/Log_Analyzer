#include "AnalysisModule.h"

void AnalysisModule::addRecord(const LogRecord& record) {
    // For now, just count each record.
    ++lineCount_;
    // Later, add detailed analysis.
}

Report AnalysisModule::generateReport() const {
    Report report;
    report.totalLines = lineCount_;
    return report;
}
