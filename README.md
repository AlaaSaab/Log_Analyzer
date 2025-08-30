# Log Analyzer

Log Analyzer is a modular C++ application for processing and analyzing log files.  
It follows a clean design with separate modules for input, parsing, analysis, and output,  
making it extensible, testable, and easy to maintain.

## Features
- **Input Module**: Handles log file reading and preprocessing.
- **Parser Module**: Extracts structured data from raw log entries.
- **Analysis Module**: Performs statistical or pattern-based analysis on parsed data.
- **Output Module**: Displays or saves analysis results in a readable format.
- **CLI**: Provides a simple command-line interface for user interaction.

## Project Structure
```
Log_Analyzer/
├── main.cpp             # Entry point
├── InputModule.*        # Handles input operations
├── ParserModule.*       # Parses logs into structured format
├── AnalysisModule.*     # Performs data analysis
├── OutputModule.*       # Manages results output
├── CLI.*                # Command-line interface
├── CMakeLists.txt       # Build configuration
└── plan.txt             # Development notes
```

## Build Instructions
This project uses **CMake**.  

```bash
# Clone repository
git clone https://github.com/yourusername/Log_Analyzer.git
cd Log_Analyzer

# Create build directory
mkdir build && cd build

# Configure and build
cmake ..
make
```

## Usage
After building, run the executable with your log file:  

```bash
./LogAnalyzer <path_to_log_file>
```

Example:
```bash
./LogAnalyzer sample.log
```

## Requirements
- C++17 or later
- CMake 3.10+

## Future Improvements
- Support for multiple log formats
- More advanced analysis methods (regex, anomaly detection)
- Export results to JSON/CSV
- Unit testing

## License
This project is licensed under the MIT License.
