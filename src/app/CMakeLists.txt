FILE(GLOB emuGuiSourceFiles *.cpp)


add_executable(emuGui
    ${emuGuiSourceFiles}
)
target_link_libraries(emuGui PUBLIC emuLayer Qt6::Widgets)


set_target_properties(emuGui PROPERTIES
    WIN32_EXECUTABLE ON
    #MACOSX_BUNDLE ON
)
