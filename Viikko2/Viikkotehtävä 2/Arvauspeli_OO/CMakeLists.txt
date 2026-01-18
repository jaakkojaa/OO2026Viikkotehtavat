cmake_minimum_required(VERSION 3.16)

project(Arvauspeli_OO LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Arvauspeli_OO main.cpp
    arvauspeli.h
    arvauspeli.cpp)

include(GNUInstallDirs)
install(TARGETS Arvauspeli_OO
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
