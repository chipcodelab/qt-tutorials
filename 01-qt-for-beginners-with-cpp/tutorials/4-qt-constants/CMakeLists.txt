cmake_minimum_required(VERSION 3.19)
project(4-qt-constants LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(4-qt-constants
    main.cpp
)

target_link_libraries(4-qt-constants
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 4-qt-constants
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
