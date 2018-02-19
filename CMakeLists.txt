# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.8)


#
# --------------------------config---------------------------------- 
#

# Project's name
project(tutorial)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(tutorial_VERSION_MAJOR 1)
set(tutorial_VERSION_MINOR 0)

include_directories("${PROJECT_SOURCE_DIR}/src/config")

set(VAR 0 CACHE STRING "Please set the variable VAR")

# option (USE_MYMATH "Use tutorial provided math implementation" ON)

configure_file(
    "${PROJECT_SOURCE_DIR}/src/config/config.h.in"
    "${PROJECT_SOURCE_DIR}/src/config/config.h"
)

#
# --------------------------end-of-config---------------------------
#


#
# ------------------------adding-libraries--------------------------
#

include_directories("${PROJECT_SOURCE_DIR}/src/calc")
add_library(calculator ${PROJECT_SOURCE_DIR}/src/calc/calc.cpp)

#
# ---------------------end-of-adding-libraries----------------------
#


add_executable(tutorial ${PROJECT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(tutorial calculator)

