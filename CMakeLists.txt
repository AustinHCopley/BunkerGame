cmake_minimum_required(VERSION 3.15)
project(BunkerGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(BunkerGame main.cpp Player.cpp Player.h Room.cpp Room.h Setting.h Setting.cpp Setting.h)