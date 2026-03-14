cmake_minimum_required(VERSION 3.19)
project(13-qt-if-statement LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(13-qt-if-statement
    main.cpp
)

target_link_libraries(13-qt-if-statement
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 13-qt-if-statement
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
