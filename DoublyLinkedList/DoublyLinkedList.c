//
// Created by thoma on 10/06/2024.
//

#include "DoublyLinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct _doubly_node {
    int val;
    struct _doubly_node *next;
    struct _doubly_node *prev;
} Node;

typedef struct _doubly_linked_list {
    Node *begin;
    Node *end;
    size_t size;
} List;


List *List_create() {

    List *l = malloc(sizeof(List));
    l->begin = NULL;
    l->end = NULL;
    l->size = 0;
    return l;
}

Node *Node_create(int val) {

    Node *node = malloc(sizeof(Node));
    node->prev = NULL;
    node->next = NULL;
    node->val = val;

    return node;
}
bool List_IsEmpty(const List *L) {
    return L->size == 0;

}

void List_addFirst(List *L, int val) {

    Node *p = Node_create(val);
    p->next = L->begin;

    if(List_IsEmpty(L)) {
        L->end =p;
    }
    else {
        L->begin->prev = p;

    }

    L->begin = p;
    L->size++;
}

void List_addLast(List *L, int val) {
    Node *p = Node_create(val);
    p->prev = L->end;

    if(List_IsEmpty(L)) {
        L->begin =p;
    }
    else {
        L->end->next = p;
    }

    L->end = p;
    L->size++;
}

void List_remove(List *L, int val) {

    if (!List_IsEmpty(L)) {
        if(L->begin->val == val) {
            Node *p = L->begin;
            L->begin = p->next;

            if(p == L->end) {
                L->end = NULL;
            }
            else {
                L->begin->prev = NULL;
            }
            free(p);
            L->size--;
        }
    }
}


void List_print(const List *L) {

    Node *p = L->begin;

    printf("L ->");

    while (p != NULL) {
        printf(" %d -> ", p->val);
        p = p->next;
    }
    printf("NULL");

    printf("\nValor final = %d\n", L->end->val);
    printf("Tamanho da lista = %zu\n", L->size);



}


