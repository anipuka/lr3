cmake_minimum_required(VERSION 3.10)
project(hello_world)

# Используем абсолютные пути
set(FORMATTER_EX_DIR ${CMAKE_SOURCE_DIR}/../formatter_ex_lib)
set(FORMATTER_DIR ${CMAKE_SOURCE_DIR}/../formatter_lib)

# Проверка существования директорий
if(NOT EXISTS ${FORMATTER_EX_DIR})
    message(FATAL_ERROR "Directory ${FORMATTER_EX_DIR} not found!")
endif()

add_subdirectory(${FORMATTER_DIR} ${CMAKE_BINARY_DIR}/formatter)
add_subdirectory(${FORMATTER_EX_DIR} ${CMAKE_BINARY_DIR}/formatter_ex)

add_executable(hello_world main.cpp)
target_link_libraries(hello_world PRIVATE formatter_ex)

# Явное указание путей к заголовкам
target_include_directories(hello_world PRIVATE
    ${FORMATTER_DIR}
    ${FORMATTER_EX_DIR}
)
