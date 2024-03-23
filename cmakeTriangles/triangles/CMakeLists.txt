# CMakeList.txt: проект CMake для cmakeTriangles; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
# Добавьте источник в исполняемый файл этого проекта.

set (SOURCE_EXE main.cpp)
set (SOURCE_LIB Figure.cpp Figure.h Triangle.cpp Triangle.h Isosceles_triangle.cpp Equilateral_triangle.cpp Right_triangle.cpp Quadrangle.cpp Rectangle.cpp Square.cpp Rhombus.cpp Parallelogram.cpp)

add_library (triangle_lib STATIC ${SOURCE_LIB})
add_executable (my_second_cmake_program ${SOURCE_EXE})
target_link_libraries (my_second_cmake_program triangle_lib)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET my_second_cmake_program PROPERTY CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
endif()

