cmake_minimum_required(VERSION 3.12)
project(training-cpp CXX)

# Add your source files here
set(SOURCES
    src/basic.cpp
    src/Glisse.cpp
    src/Platine.cpp
    src/Roller.cpp
    src/smart-pointer.cpp
    src/stl-test.cpp
    src/training-cpp.cpp
)

# Add your header files here
set(HEADERS
    src/basic.h
    src/Glisse.h
    src/Platine.h
    src/Roller.h
    src/smart-pointer.h
    src/stl-test.h
)

# Create the executable
add_executable(training-cpp ${SOURCES} ${HEADERS})
