//
// Created by thoma on 07/06/2024.
//

#include <stdlib.h>
#include "../includes/TLinkedList.h"
#include "stdio.h"

typedef struct _node {
    int val;
    struct _node *next;
} Node;

typedef struct _list {
    Node *begin;
    Node *end;
} LinkedList;


LinkedList *LinkedList_create() {

    LinkedList *L = (LinkedList*) malloc(sizeof(LinkedList));
    L->begin=NULL;
    L->end = NULL;

    return L;
}

Node *Node_create(int val) {

    Node *n = malloc(sizeof(Node));
    n->val = val;
    n->next = NULL;

    return n;
}

void LinkedList_addFirst(LinkedList *L, int val) {
    Node *p = Node_create(val);
        p->next = L->begin;
        L->begin = p;

        if(L->end == NULL) {
            L->end = p;
        }
}

void LinkedList_addLastSlow(LinkedList *L, int val) {

    Node *q = Node_create(val);
    if(L->begin == NULL) {
        L->begin = q;
    }
    else {
        Node *p = L->begin;
        while(p->next != NULL) {
            p = p->next;
        }
        p->next = q;
    }

}

void LinkedList_addLastFast(LinkedList *L, int val) {

    Node *q = Node_create(val);
    if(L->begin == NULL) {
        L->begin = q;
        L->end = q;
    } else {
        L->end->next = q;
        L->end = L->end->next;

    }


}

bool LinkedList_IsEmpty(const LinkedList *L) {
    return (L->begin == NULL && L-> end== NULL);
}



void LinkedList_print(const LinkedList *L) {
    Node *p = L->begin;

    printf("L ->");

    while (p != NULL) {
        printf(" %d -> ", p->val);
        p = p->next;
    }
    printf("NULL");

    printf("\nValor final = %d\n", L->end->val);



}

void LinkedList_remove(LinkedList *L, int val) {
    if (!LinkedList_IsEmpty(L)) {
        if(L->begin->val == val) {
            Node *pos = L->begin;
            L->begin = L->begin->next;

            if(L->end == pos) {
                L->end = NULL;
            }

            free(pos);
        }
        else {
            Node *pos = L->begin->next;
            Node *prev = L->begin;

            while(pos!= NULL && pos->val != val) {
                prev = prev->next;
                pos = pos->next;
            }

            if (pos != NULL) {
                prev->next = pos->next;

                if(pos->next == NULL) {
                    L->end = prev;
                }
                free(pos);

            }

        }
    }


}

void LinkedList_remove2(LinkedList *L, int val) {
    if (!LinkedList_IsEmpty(L)) {
        Node *prev = NULL;
        Node *pos = L->begin;

        while(pos != NULL && pos->val != val) {
            prev = pos;
            pos = pos->next;
        }

        if (pos != NULL) {

            if (L->end == pos) {
                L->end = prev;
            }

            if (L->begin == pos) {
                L->begin = L->begin->next;
            }
            else {
                prev->next = pos->next;
            }
            free(pos);
        }
    }
}
