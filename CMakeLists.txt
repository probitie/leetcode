cmake_minimum_required(VERSION 3.5)

project(leetcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(leetcode main.cpp)

add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wall -Wextra")

install(TARGETS leetcode
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
