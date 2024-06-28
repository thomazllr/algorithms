//
// Created by thoma on 17/06/2024.
//

#ifndef ALGORITHMS_STATIC_STACK_H
#define ALGORITHMS_STACK_H
#include <stdbool.h>
#include <stddef.h>

typedef struct _stack Stack;
typedef struct _node Node;

/*
 * Cria instâncias de pilhas com um tamanho específico.
 * @return Stack* - Ponteiro para a pilha
 */
Stack *Stack_create();
/**
 * Insere um elemento na pilha.
 * @param Stack* stack - Ponteiro para a pilha
 * @param int value - Valor a ser inserido
 * @return bool - true se a inserção foi bem sucedida, false caso contrário
 */
bool Stack_push(Stack *, int);
/**
 * Remove um elemento da pilha.
 * @param Stack* stack - Ponteiro para a pilha
 * @param int* value - Ponteiro para a variável que receberá o valor removido
 * @return bool - true se a remoção foi bem sucedida, false caso contrário
 */
bool Stack_pop(Stack *, int *);
/**
 * Retorna o tamanho da pilha.
 * @param Stack* stack - Ponteiro para a pilha
 * @return unsigned int - Tamanho ocupado da pilha
 */
size_t Stack_size(Stack *);
/**
 * Checa se a pilha está vazia
 * @param Stack* stack - Ponteiro para a pilha
 * @return bool - true se a pilha estiver vazia, false caso contrário
 */
bool Stack_is_empty(Stack *);
/**
 * Checa se a pilha está cheia
 * @param Stack* stack - Ponteiro para a pilha
 * @return bool - true se a pilha estiver cheia, false caso contrário
 */
bool Stack_is_full(Stack *);

#endif // ALGORITHMS_STATIC_STACK_H
