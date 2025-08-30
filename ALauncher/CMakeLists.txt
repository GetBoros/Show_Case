#-------------------------------------------------------------------------------------------------------------
add_executable(ALauncher "Main.cpp" "Main.h")  # create .exe
#-------------------------------------------------------------------------------------------------------------
target_link_libraries(ALauncher PRIVATE cmet dexample)
#-------------------------------------------------------------------------------------------------------------
add_custom_command(TARGET ALauncher POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:cmet> $<TARGET_FILE_DIR:ALauncher>
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:dexample> $<TARGET_FILE_DIR:ALauncher>
    COMMENT "Copying cmet and dexample to ALauncher's directory"
)  # COPY .dll`s near .exe
#-------------------------------------------------------------------------------------------------------------

# set_property(TARGET ALauncher PROPERTY CXX_STANDARD 20)

#-------------------------------------------------------------------------------------------------------------
