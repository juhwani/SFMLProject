cmake_minimum_required(VERSION 3.14)
project(thing)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
add_executable(thing ${SOURCE_FILES})

include_directories(/opt/homebrew/opt/sfml/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

target_link_libraries(thing sfml-system sfml-window sfml-graphics sfml-audio sfml-network)

link_directories(/opt/homebrew/opt/sfml/lib)
