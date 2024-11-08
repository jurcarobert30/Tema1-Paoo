cmake_minimum_required(VERSION 3.10)
 
project(ProiectTahograf)
 
# Setăm versiunea standard de C++.
set(CMAKE_CXX_STANDARD 17)
 
# Specificăm directoarele pentru fișierele header și sursă.
include_directories(include)
add_executable(ProiectTahograf main.cpp Appointment.cpp)