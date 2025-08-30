#include "CLI.h"
#include <iostream>

bool CLI::parse(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <logfile1> [logfile2] ..." << std::endl;
        return false;
    }
    for (int i = 1; i < argc; ++i) {
        inputFiles_.push_back(argv[i]);
    }
    return true;
}

const std::vector<std::string>& CLI::getInputFiles() const {
    return inputFiles_;
}
