#include "InputModule.h"

bool InputModule::openFile(const std::string& filename) {
    fileStream_.open(filename);
    return fileStream_.is_open();
}

bool InputModule::getNextLine(std::string& line) {
    if (!std::getline(fileStream_, line)) {
        return false;
    }
    return true;
}

void InputModule::closeFile() {
    if (fileStream_.is_open()) {
        fileStream_.close();
    }
}
