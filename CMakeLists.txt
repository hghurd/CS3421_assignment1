cmake_minimum_required(VERSION 3.23)
project(Assignment1 C)

set(CMAKE_C_STANDARD 99)

add_executable(Assignment1 main.c cpu.c cpu.h memory.c memory.h clock.c clock.h clock_internal.h cpu_internal.h memory_internal.h command_parser.c command_parser.h)
