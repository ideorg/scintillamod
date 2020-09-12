cmake_minimum_required(VERSION 3.7)
project(scintillaex)

include_directories(stc/scintilla/include stc/scintilla/src stc/scintilla/lexlib)

set(CMAKE_CXX_STANDARD 11)

set(wxWidgets_ROOT_DIR /usr/include/wx-3.0)
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES main.cpp stc/PlatWX.cpp stc/stc.cpp stc/ScintillaWX.cpp
        )
add_executable(test ${SOURCE_FILES})

target_link_libraries(test ${wxWidgets_LIBRARIES})