cmake_minimum_required(VERSION 3.19)
project(6-qt-structs LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(6-qt-structs
    main.cpp
)

target_link_libraries(6-qt-structs
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 6-qt-structs
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
