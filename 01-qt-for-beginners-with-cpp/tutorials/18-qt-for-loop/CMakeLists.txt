cmake_minimum_required(VERSION 3.19)
project(18-qt-for-loop LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(18-qt-for-loop
    main.cpp
)

target_link_libraries(18-qt-for-loop
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 18-qt-for-loop
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
