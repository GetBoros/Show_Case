#-------------------------------------------------------------------------------------------------------------
add_library(dexample SHARED "AdTemp.cpp" AdTemp.h)  # create .dll
#-------------------------------------------------------------------------------------------------------------
target_compile_definitions(dexample PRIVATE DEXAMPLE_EXPORTS)  # export func for windows
#-------------------------------------------------------------------------------------------------------------

# set_property(TARGET dexample PROPERTY CXX_STANDARD 20)  # sed STD20

target_include_directories(dexample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})  # export folder for other project
#-------------------------------------------------------------------------------------------------------------
