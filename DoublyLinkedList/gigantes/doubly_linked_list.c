#include "doubly_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

// Função para criar um novo nó
Node *createNode(int digit)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        perror("Erro ao alocar memória para novo nó");
        exit(EXIT_FAILURE);
    }
    newNode->digit = digit;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Função para inicializar a lista
void initializeList(DoublyLinkedList *list)
{
    list->head = NULL;
    list->tail = NULL;
}

// Função para inserir um novo nó no final da lista
void insertAtEnd(DoublyLinkedList *list, int digit)
{
    Node *newNode = createNode(digit);

    if (list->head == NULL)
    { // Se a lista está vazia
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        newNode->prev = list->tail;
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

// Função para imprimir a lista (para debug)
void printList(DoublyLinkedList *list)
{
    Node *current = list->head;
    while (current != NULL)
    {
        printf("%d", current->digit);
        current = current->next;
    }
    printf("\n");
}

// Função para liberar toda a memória alocada pela lista
void freeList(DoublyLinkedList *list)
{
    Node *current = list->head;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    list->head = NULL;
    list->tail = NULL;
}

// Função para somar dois números representados por listas
DoublyLinkedList addLargeNumbers(DoublyLinkedList *num1, DoublyLinkedList *num2)
{
    DoublyLinkedList result;
    initializeList(&result);

    Node *current1 = num1->tail;
    Node *current2 = num2->tail;
    int carry = 0;

    while (current1 != NULL || current2 != NULL || carry > 0)
    {
        int sum = carry;
        if (current1 != NULL)
        {
            sum += current1->digit;
            current1 = current1->prev;
        }
        if (current2 != NULL)
        {
            sum += current2->digit;
            current2 = current2->prev;
        }

        carry = sum / 10;
        sum %= 10;

        insertAtEnd(&result, sum);
    }

    return result;
}
