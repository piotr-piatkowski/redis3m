file(GLOB SRC_FILES
    "*.cpp"
    "utils/*.cpp"
    "patterns/*.cpp"
)

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/utils/datadir.cpp.in
    ${CMAKE_CURRENT_BINARY_DIR}/datadir.cpp @ONLY
)

add_library(redis3m STATIC
    ${SRC_FILES} 
    ${CMAKE_CURRENT_BINARY_DIR}/datadir.cpp
)
