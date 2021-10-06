# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

set(PROJ_NAME "OpenCVTrialProject")

project(${PROJ_NAME} C CXX)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS "-O0")
set(CMAKE_POSITION_INDEPENDANT_CODE ON)

set(headerFiles
	"include/OpenCVTrialProject.h"
)

set(sourceFiles
	"src/OpenCVTrialProject.cpp"
)

# Add source to this project's executable.
find_package(OpenCV REQUIRED)

INCLUDE_DIRECTORIES( ${CMAKE_CURRENT_SOURCE_DIR}/include )
link_directories( ${CMAKE_BINARY_DIR}/out)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/out)
add_executable( ${PROJ_NAME} ${sourceFiles} ${headerFiles} )

target_link_libraries( ${PROJ_NAME} ${OpenCV_LIBS} )