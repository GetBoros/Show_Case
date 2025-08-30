#-------------------------------------------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.30)  # if use cpp modules features need use those
#-------------------------------------------------------------------------------------------------------------
project(Show_Case CXX)  # project name
#-------------------------------------------------------------------------------------------------------------
if (MSVC)  # enable edit and continue for MSVC
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT 
        "$<IF:$<CONFIG:Debug,RelWithDebInfo>,EditAndContinue,ProgramDatabase>")  # only Debug and RelWithDebInfo
    
    # Important: no /GL and /OPT:ICF if use hot-reload
    add_compile_options("$<$<CONFIG:Debug>:/ZI>")  # support Edit and Continued
    add_link_options("$<$<CONFIG:Debug>:/INCREMENTAL>")  # link for hot reload
endif()
#-------------------------------------------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "TRUE")
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)
#-------------------------------------------------------------------------------------------------------------
add_subdirectory(cmet)  # dll
add_subdirectory(dexample)  # dll
add_subdirectory(ALauncher)  # exe
#-------------------------------------------------------------------------------------------------------------
