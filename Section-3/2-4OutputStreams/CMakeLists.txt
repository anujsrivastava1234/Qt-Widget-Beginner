cmake_minimum_required(VERSION 3.19)
project(2-4OutputStreams LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(2-4OutputStreams
    main.cpp
)

target_link_libraries(2-4OutputStreams
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 2-4OutputStreams
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
