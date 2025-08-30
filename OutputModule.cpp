#include "OutputModule.h"
#include <iostream>

void OutputModule::printReport(const Report& report) {
    std::cout << "=== Log Analysis Report ===" << std::endl;
    std::cout << "Total log entries: " << report.totalLines << std::endl;
    // Add more details as your analysis evolves.
}
