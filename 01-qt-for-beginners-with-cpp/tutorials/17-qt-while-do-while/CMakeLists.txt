cmake_minimum_required(VERSION 3.19)
project(17-qt-while-do-while LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(17-qt-while-do-while
    main.cpp
)

target_link_libraries(17-qt-while-do-while
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 17-qt-while-do-while
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
