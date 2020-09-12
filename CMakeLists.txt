cmake_minimum_required(VERSION 3.7)
project(scintillamod)

include_directories(stc/scintilla/include stc/scintilla/src stc/scintilla/lexlib)

set(CMAKE_CXX_STANDARD 11)

set(wxWidgets_ROOT_DIR /usr/include/wx-3.0)
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES main.cpp stc/PlatWX.cpp stc/stc.cpp stc/ScintillaWX.cpp 
        stc/scintilla/src/AutoComplete.cxx
        stc/scintilla/src/CallTip.cxx
        stc/scintilla/src/CaseConvert.cxx
        stc/scintilla/src/CaseFolder.cxx
        stc/scintilla/src/Catalogue.cxx
        stc/scintilla/src/CellBuffer.cxx
        stc/scintilla/src/CharClassify.cxx
        stc/scintilla/src/ContractionState.cxx
        stc/scintilla/src/DBCS.cxx
        stc/scintilla/src/Decoration.cxx
        stc/scintilla/src/Document.cxx
        stc/scintilla/src/EditModel.cxx
        stc/scintilla/src/Editor.cxx
        stc/scintilla/src/EditView.cxx
        stc/scintilla/src/ExternalLexer.cxx
        stc/scintilla/src/Indicator.cxx
        stc/scintilla/src/KeyMap.cxx
        stc/scintilla/src/LineMarker.cxx
        stc/scintilla/src/MarginView.cxx
        stc/scintilla/src/PerLine.cxx
        stc/scintilla/src/PositionCache.cxx
        stc/scintilla/src/RESearch.cxx
        stc/scintilla/src/RunStyles.cxx
        stc/scintilla/src/ScintillaBase.cxx
        stc/scintilla/src/Selection.cxx
        stc/scintilla/src/Style.cxx
        stc/scintilla/src/UniConversion.cxx
        stc/scintilla/src/UniqueString.cxx
        stc/scintilla/src/ViewStyle.cxx
        stc/scintilla/src/XPM.cxx
      stc/scintilla/lexlib/Accessor.cxx
      stc/scintilla/lexlib/CharacterCategory.cxx
      stc/scintilla/lexlib/CharacterSet.cxx
      stc/scintilla/lexlib/DefaultLexer.cxx
      stc/scintilla/lexlib/LexerBase.cxx
      stc/scintilla/lexlib/LexerModule.cxx
      stc/scintilla/lexlib/LexerNoExceptions.cxx
      stc/scintilla/lexlib/LexerSimple.cxx
      stc/scintilla/lexlib/PropSetSimple.cxx
      stc/scintilla/lexlib/StyleContext.cxx
      stc/scintilla/lexlib/WordList.cxx
        )
add_executable(test ${SOURCE_FILES})

target_link_libraries(test ${wxWidgets_LIBRARIES})