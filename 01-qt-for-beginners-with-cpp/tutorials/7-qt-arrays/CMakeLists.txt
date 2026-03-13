cmake_minimum_required(VERSION 3.19)
project(7-qt-arrays LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(7-qt-arrays
    main.cpp
)

target_link_libraries(7-qt-arrays
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 7-qt-arrays
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
