#ifndef INPUTMODULE_H
#define INPUTMODULE_H

#include <string>
#include <fstream>

class InputModule {
public:
    // Opens a file stream given a filename. Returns true on success.
    bool openFile(const std::string& filename);

    // Reads the next line from the currently opened file.
    // Returns true if a line was read, false if end-of-file or error.
    bool getNextLine(std::string& line);

    // Close the file if open.
    void closeFile();

private:
    std::ifstream fileStream_;
};

#endif // INPUTMODULE_H
