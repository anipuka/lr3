cmake_minimum_required(VERSION 3.10)
project(solver)

# Подключаем подпроекты
add_subdirectory(../formatter_lib ${CMAKE_BINARY_DIR}/formatter)
add_subdirectory(../formatter_ex_lib ${CMAKE_BINARY_DIR}/formatter_ex)

# Создаем solver_lib с исходным файлом
add_library(solver_lib STATIC 
    ../solver_lib/solver.h
    ../solver_lib/solver.cpp  # Добавляем исходный файл
)
target_include_directories(solver_lib PUBLIC ../solver_lib)

# Основной исполняемый файл
add_executable(solver main.cpp)
target_link_libraries(solver PRIVATE formatter_ex solver_lib)

# Пути к заголовкам
target_include_directories(solver PRIVATE
    ../formatter_lib
    ../formatter_ex_lib
    ../solver_lib
)

# Настройки компиляции
set_target_properties(solver PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)
