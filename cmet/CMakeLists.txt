#-------------------------------------------------------------------------------------------------------------
add_library(cmet SHARED "cppmet.cpp" "cppmet.h")  # create .dll if SHARED
#-------------------------------------------------------------------------------------------------------------
target_compile_features(cmet PUBLIC cxx_std_23)  # enable STD23 modules features
target_compile_definitions(cmet PRIVATE CMET_EXPORTS)  # export func for windows
#-------------------------------------------------------------------------------------------------------------
target_sources(cmet
    PUBLIC
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
            Modules/Temp/math.ixx
)  # if .ixx(cpp modules) scan and generate .ifc || if PRIVATE only for this .dll
#-------------------------------------------------------------------------------------------------------------
target_include_directories(cmet
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Modules
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
# target_include_directories(cmet PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Modules)  # header and folders see only current dll
# target_include_directories(cmet PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})  # export folder for other project
#-------------------------------------------------------------------------------------------------------------




# TEMP || IF DON`T NEED FOLDERS Modules/Temp/ use next

# add_library(cmet SHARED "cppmet.cpp" "cppmet.h" "math.ixx")  # create .dll

# target_compile_features(cmet PUBLIC cxx_std_23)  # enable STD20 module features
# target_compile_definitions(cmet PRIVATE CMET_EXPORTS)  # export func for windows

# target_sources(cmet
#     PUBLIC
#         FILE_SET cxx_modules TYPE CXX_MODULES FILES math.ixx
# )  # CMAKE Scan modules dependecies 

# target_include_directories(cmet PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Modules)  # Приватный include — хедеры и папки видит только cmet
# target_include_directories(cmet PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})  # export folder for other project

# TEMP END