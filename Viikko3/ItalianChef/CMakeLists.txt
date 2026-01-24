cmake_minimum_required(VERSION 3.16)

project(ItalianChef LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ItalianChef main.cpp
    italianchef.h italianchef.cpp)

include(GNUInstallDirs)
install(TARGETS ItalianChef
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
