//
// Created by thoma on 08/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "stdbool.h"
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

    printf("\nL->size = %zu", L->size);
}

void CircList_inverted_print(const CircList *L) {

    if (CircList_is_empty(L)) {
        printf("L -> NULL\n");
        printf("L->end -> NULL\n");
    }
    else {
        CircNode *p = L->end;
        printf("L -> ");

        do {
            printf("%d -> ", p->val);
            p = p->prev;
        } while(p != L->end);

        printf("\nL->begin -> %d\n", L->begin->val);
    }

    printf("Size: %lu\n\n", L->size);
}

void CircList_add_last(CircList *L, int val) {

    CircNode *p = CircNode_create(val);

    if(CircList_is_empty(L)) {
        L->begin = p;
    }
    else {
        L->end->next = p;
        p->prev = L->end;

        L->begin->prev = p;
        p->next = L->begin;

    }
    L->end = p;
    L->size++;
}

void CircList_remove(CircList *L, int val) {

    if(!CircList_is_empty(L)) {
        CircNode *p = L->begin;
        if(L->begin->val == val) {
            if(L->begin == L->end) {
                L->begin = NULL;
                L->end = NULL;
                free(p);
            }
            else {
                L->begin = p->next;
                L->begin->prev = L->end;
                L->end->next = L->begin;
                free(p);
            }
            L->size--;
        }
        else {
            p = p->next;

            while (p != L->begin) {
                if (p->val == val) {
                    if (L->end == p) {
                        L->end = p->prev;
                    }
                    p->prev->next = p->next;
                    p->next->prev = p->prev;
                    free(p);
                    L->size--;
                    break;
                } else {
                    p = p->next;
                }
            }
        }

    }

}

bool Equals(const CircList *L1, const CircList *L2) {

    int equals = 0;
    if (L1->size != L2->size){
         return 0;
    }
    else {

        CircNode *p = L1->begin;
        CircNode *q = L2->begin;

        for (int i =0; i<L1->size; i++) {
            if(p->val != q->val) {
                q = q->next;
            }
            if(p->val == q->val) {
                p = p->next;
                q = q->next;
                equals++;

            }
        }
    }

    return equals == L1->size;


}

