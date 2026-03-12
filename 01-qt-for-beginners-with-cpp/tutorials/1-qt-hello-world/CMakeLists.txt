cmake_minimum_required(VERSION 3.19)
project(1-qt-hello-world LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(1-qt-hello-world
    main.cpp
)

target_link_libraries(1-qt-hello-world
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 1-qt-hello-world
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
