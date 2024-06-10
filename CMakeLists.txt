cmake_minimum_required(VERSION 3.28)
project(algorithms C)

set(CMAKE_C_STANDARD 99)

add_executable(algorithms main.c
)

add_executable(LinkedList LinkedList/main.c LinkedList/LinkedList.c LinkedList/LinkedList.h)

add_executable(Stack Stack/main.c
        Stack/Stack.c
        Stack/Stack.h)

add_executable(ToninhoTrocador LinkedList/ToninhoTrocador/main.c LinkedList/ToninhoTrocador/LinkedList.c LinkedList/ToninhoTrocador/LinkedList.h)
add_executable(CircularLinkedList CircularLinkedList/main.c
        CircularLinkedList/CircularLinkedList.c
        CircularLinkedList/CircularLinkedList.h)
add_executable(DoublyLinkedList DoublyLinkedList/main.c
        DoublyLinkedList/DoublyLinkedList.c
        DoublyLinkedList/DoublyLinkedList.h)
