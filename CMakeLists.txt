cmake_minimum_required(VERSION 3.23)
project(Assignment1 C)

set(CMAKE_C_STANDARD 99)


add_executable(Assignment1 cpu.c cpu.h memory.c memory.h clock.c clock.h cs3421_emul.c)
target_link_libraries(Assignment1 m)