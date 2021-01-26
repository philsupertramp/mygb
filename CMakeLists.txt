cmake_minimum_required(VERSION 3.17)

# set the project name
project(mygb)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_definitions(-DEXPORT_MOLECULE_DLL)

if(UNIX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c11 -lGLEW -pthread -fpermissive")
elseif(MSVC)
    # suppress warning about unknown options -pthread and -fpermissive
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    add_definitions(-Dstd:c11)
endif(UNIX)

include_directories(roms)
add_executable(mygb src/main.c src/defines.h src/rom.h include/rom.c src/memory.h include/memory.c src/registers.h include/registers.c src/cpu.h include/cpu.c)

target_link_libraries(mygb PRIVATE m)
