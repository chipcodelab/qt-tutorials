cmake_minimum_required(VERSION 3.19)
project(11-qt-cerr LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(11-qt-cerr
    main.cpp
)

target_link_libraries(11-qt-cerr
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 11-qt-cerr
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
