#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

// Estrutura do nó da lista duplamente encadeada
typedef struct Node
{
    int digit;
    struct Node *prev;
    struct Node *next;
} Node;

// Estrutura da lista duplamente encadeada
typedef struct
{
    Node *head;
    Node *tail;
} DoublyLinkedList;

// Funções públicas da lista duplamente encadeada
Node *createNode(int digit);
void initializeList(DoublyLinkedList *list);
void insertAtEnd(DoublyLinkedList *list, int digit);
void printList(DoublyLinkedList *list);
void freeList(DoublyLinkedList *list);

// Função para somar dois números representados por listas
DoublyLinkedList addLargeNumbers(DoublyLinkedList *num1, DoublyLinkedList *num2);

#endif // DOUBLY_LINKED_LIST_H
