cmake_minimum_required(VERSION 3.10)
project(formatter_ex)

# Явное указание пути к formatter_lib
set(FORMATTER_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/formatter_lib)

# Создание библиотеки
add_library(formatter_ex STATIC 
    formatter_ex.cpp
    formatter_ex.h
)

# Подключение зависимостей
target_include_directories(formatter_ex PRIVATE
    ${FORMATTER_INCLUDE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(formatter_ex PRIVATE formatter)

# Для IDE (чтобы видел заголовки)
source_group("Header Files" FILES formatter_ex.h)
source_group("Source Files" FILES formatter_ex.cpp)
