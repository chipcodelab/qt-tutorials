cmake_minimum_required(VERSION 3.19)
project(14-qt-if-else-statement LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(14-qt-if-else-statement
    main.cpp
)

target_link_libraries(14-qt-if-else-statement
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 14-qt-if-else-statement
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
