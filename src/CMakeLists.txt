set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

FILE(GLOB_RECURSE SRC *.c *.cc *.h)
add_executable(demos_qt ${SRC})
find_package(Qt5 REQUIRED COMPONENTS Widgets)
target_link_libraries(demos_qt Qt5::Widgets)
