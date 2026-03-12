cmake_minimum_required(VERSION 3.19)
project(3-qt-data-types LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(3-qt-data-types
    main.cpp
)

target_link_libraries(3-qt-data-types
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 3-qt-data-types
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
