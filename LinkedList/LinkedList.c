//
// Created by thoma on 07/06/2024.
//

#include <stdlib.h>
#include "LinkedList.h"
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

void LinkedList_print(const LinkedList *L) {
    Node *p = L->begin;

    printf("L ->");

    while (p != NULL) {
        printf(" %d -> ", p->val);
        p = p->next;
    }
    printf("NULL");



}


