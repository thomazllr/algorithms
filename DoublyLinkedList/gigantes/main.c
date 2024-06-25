#include <stdio.h>
#include "doubly_linked_list.h"

void testAddLargeNumbers(DoublyLinkedList *num1, DoublyLinkedList *num2)
{
    DoublyLinkedList sum = addLargeNumbers(num1, num2);

    printf("Resultado da soma: ");
    printList(&sum);

    freeList(&sum);
}

int main()
{
    DoublyLinkedList num1, num2;
    initializeList(&num1);
    initializeList(&num2);

    // Exemplo de números para teste
    insertAtEnd(&num1, 9);
    insertAtEnd(&num1, 9);
    insertAtEnd(&num1, 9);

    insertAtEnd(&num2, 1);
    insertAtEnd(&num2, 2);
    insertAtEnd(&num2, 3);

    printf("Número 1: ");
    printList(&num1);

    printf("Número 2: ");
    printList(&num2);

    testAddLargeNumbers(&num1, &num2);

    freeList(&num1);
    freeList(&num2);

    return 0;
}
