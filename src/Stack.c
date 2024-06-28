#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include "../includes/Stack.h"

typedef struct _node
{
    int info;
    struct _node *prox;
} Node;

typedef struct _stack
{
    Node *inicio;
    size_t qty;
} Stack;

Stack *Stack_create()
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    if (stack)
    {
        stack->inicio = NULL;
        stack->qty = 0;
    }
    return stack;
}
bool Stack_push(Stack *stack, int value)
{
    Node *novo = malloc(sizeof(Node));
    if (novo == NULL)
        return false;
    novo->info = value;
    novo->prox = stack->inicio;
    stack->inicio = novo;
    stack->qty++;
    return true;
}
/**
 * Remove um elemento da pilha.
 * @param Stack* stack - Ponteiro para a pilha
 * @param int* value - Ponteiro para a variável que receberá o valor removido
 * @return bool - true se a remoção foi bem sucedida, false caso contrário
 */
bool Stack_pop(Stack *stack, int *temp)
{
    if (!Stack_is_empty(stack))
    {
        *temp = stack->inicio->info;
        Node *aux = stack->inicio;
        stack->inicio = aux->prox;
        free(aux);
        stack->qty--;
        return true;
    }
    return false;
}

/**
 * Checa se a pilha está vazia
 * @param Stack* stack - Ponteiro para a pilha
 * @return bool - true se a pilha estiver vazia, false caso contrário
 */
bool Stack_is_empty(Stack *stack) { return stack->qty == 0; }
/**
 * Checa se a pilha está cheia
 * @param Stack* stack - Ponteiro para a pilha
 * @return bool - true se a pilha estiver cheia, false caso contrário
 */
bool Stack_is_full(Stack *stack) { return false; }

/**
 * Retorna o tamanho da pilha.
 * @param Stack* stack - Ponteiro para a pilha
 * @return unsigned int - Tamanho ocupado da pilha
 */
size_t Stack_size(Stack *stack) { return stack->qty; }
