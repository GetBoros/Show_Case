#-------------------------------------------------------------------------------------------------------------
add_executable(launcher "Main.cpp" "Main.h")  # create .exe
#-------------------------------------------------------------------------------------------------------------
target_link_libraries(launcher PRIVATE cmet dexample)
#-------------------------------------------------------------------------------------------------------------
add_custom_command(TARGET launcher POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:cmet> $<TARGET_FILE_DIR:launcher>
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:dexample> $<TARGET_FILE_DIR:launcher>
    COMMENT "Copying cmet and dexample to launcher's directory"
)  # COPY .dll`s near .exe
#-------------------------------------------------------------------------------------------------------------

# set_property(TARGET launcher PROPERTY CXX_STANDARD 20)

#-------------------------------------------------------------------------------------------------------------
