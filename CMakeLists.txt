cmake_minimum_required(VERSION 3.10)
project(LogAnalyzer VERSION 0.1 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add executable target
add_executable(LogAnalyzer
    src/main.cpp
    src/CLI.cpp
    src/InputModule.cpp
    src/ParserModule.cpp
    src/AnalysisModule.cpp
    src/OutputModule.cpp
)

# (Optional) Link Boost libraries if needed in the future
# find_package(Boost COMPONENTS program_options regex REQUIRED)
# target_link_libraries(LogAnalyzer PRIVATE Boost::program_options Boost::regex)
