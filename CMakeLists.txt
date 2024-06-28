cmake_minimum_required(VERSION 3.28)
project(algorithms C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_EXE_LINKER_FLAGS "-Wl,-subsystem,console")

function(add_algorithm_executable name)
    add_executable(${name} ${ARGN})
endfunction()

#libs
add_library(LinkedListLib src/TLinkedList.c includes/TLinkedList.h)
add_library(StaticStackLib src/static_stack.c includes/static_stack.h)
add_library(ToninhoTrocadorLib src/LinkedList.c includes/LinkedList.h)
add_library(CircularLinkedListLib src/CircularLinkedList.c includes/CircularLinkedList.h)
add_library(DoublyLinkedListLib src/DoublyLinkedList.c includes/DoublyLinkedList.h)

add_algorithm_executable(algorithms main.c)

add_algorithm_executable(LinkedList apps/linked_list.c)
target_link_libraries(LinkedList LinkedListLib)

add_algorithm_executable(StaticStack apps/stack_stack_app.c)
target_link_libraries(StaticStack StaticStackLib)

add_algorithm_executable(ToninhoTrocador apps/toninho_trocador.c)
target_link_libraries(ToninhoTrocador ToninhoTrocadorLib)

add_algorithm_executable(CircularLinkedList apps/circular_linked_list.c)
target_link_libraries(CircularLinkedList CircularLinkedListLib)

add_algorithm_executable(DoublyLinkedList apps/doubly_linked_list.c)
target_link_libraries(DoublyLinkedList DoublyLinkedListLib)

add_algorithm_executable(EDMundo apps/ed_mundo.c)
target_link_libraries(EDMundo CircularLinkedListLib)

add_algorithm_executable(Igualdade apps/igualdade.c)
target_link_libraries(Igualdade CircularLinkedListLib)

add_algorithm_executable(Stack apps/stack_app.c src/Stack.c includes/Stack.h)

add_algorithm_executable(EDPILHA apps/stack_digits_app.c src/StackDigits.c includes/StackDigits.h)
