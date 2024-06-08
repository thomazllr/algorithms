cmake_minimum_required(VERSION 3.28)
project(algorithms C)

set(CMAKE_C_STANDARD 99)

add_executable(algorithms main.c
)

add_executable(LinkedList LinkedList/main.c LinkedList/LinkedList.c LinkedList/LinkedList.h)

add_executable(Stack Stack/main.c
        Stack/Stack.c
        Stack/Stack.h)