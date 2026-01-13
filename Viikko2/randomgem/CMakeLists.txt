cmake_minimum_required(VERSION 3.16)

project(randomgem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(randomgem main.cpp
    random.h random.cpp
    dht.cpp
    dht.h)

include(GNUInstallDirs)
install(TARGETS randomgem
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
