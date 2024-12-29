cmake_minimum_required(VERSION 3.5)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading Hello World App"
        LANGUAGES CXX)   


#logger library
add_subdirectory(logger)

add_executable(HelloAppBinary main.cpp src/dog.cpp src/operations.cpp)
# file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
# add_executable(HelloAppBinary main.cpp ${SOURCE_FILES})
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(HelloAppBinary PUBLIC logger)