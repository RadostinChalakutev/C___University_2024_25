cmake_minimum_required(VERSION 3.5)
project(fuel_calculator)

# Задаваме C++ стандарт
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# На Windows: уверете се, че използвате vcpkg toolchain файл при конфигурация
# (например: -DCMAKE_TOOLCHAIN_FILE=C:/Users/rados/tools/vcpkg/scripts/buildsystems/vcpkg.cmake)

# Търсим FLTK чрез CMake Config mode
find_package(FLTK CONFIG REQUIRED)

# Създаваме изпълнимия файл от изходния код
add_executable(fuel_calculator main.cpp)

# Включваме директории за хедъри (предоставени от FLTK)
target_include_directories(fuel_calculator PRIVATE ${FLTK_INCLUDE_DIRS})

# Линкваме с FLTK библиотеката чрез именования мишлец от Config mode
# FLTK::FLTK обхваща основните FLTK компоненти
target_link_libraries(fuel_calculator PRIVATE FLTK::FLTK)

# Ако използвате допълнителни модули (Forms, Images, OpenGL), добавете:
# find_package(OpenGL REQUIRED)
# target_link_libraries(fuel_calculator PRIVATE FLTK::FLTK FLTK::FLTKForms FLTK::FLTKImages OpenGL::GL)
