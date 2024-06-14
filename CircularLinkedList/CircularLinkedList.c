//
// Created by thoma on 08/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "CircularLinkedList.h"

typedef struct _circ_node
{
    int val;
    struct _circ_node *next;
    struct _circ_node *prev;
} CircNode;

typedef struct _circ_list
{
    CircNode *begin;
    CircNode *end;
    size_t size;
} CircList;

CircList *CircList_create()
{

    CircList *L = malloc(sizeof(CircList));
    L->begin = NULL;
    L->end = NULL;
    L->size = 0;

    return L;
}

CircNode *CircNode_create(int val)
{

    CircNode *cnode = malloc(sizeof(CircNode));

    cnode->prev = cnode;
    cnode->next = cnode;
    cnode->val = val;
    return cnode;
}

void CircList_add_first(CircList *L, int val)
{

    CircNode *p = CircNode_create(val);

    if (CircList_is_empty(L))
    {
        L->begin = p;
        L->end = p;
    }
    else
    {
        p->next = L->begin;
        L->begin->prev = p;
        L->begin = p;
        p->prev = L->end;
        L->end->next = p;
    }
    L->size++;
}

bool CircList_is_empty(const CircList *L)
{
    return L->size == 0;
}

void CircList_print(const CircList *L)
{

    if (CircList_is_empty(L))
    {
        printf("CircList is empty\n");
        return;
    }

    CircNode *p = L->begin;

    printf("CircList = ");

    do
    {
        printf("%d -> ", p->val);
        p = p->next;

    } while (p != L->begin);

    printf("END");
}
