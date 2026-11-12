
cmake_minimum_required(VERSION 3.15)

project(HuffmanCompressor C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(huffman
    main.c
    compres.c
    decompres.c
)

target_include_directories(huffman PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
