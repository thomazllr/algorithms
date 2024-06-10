//
// Created by thoma on 07/06/2024.
//

#include <stdlib.h>
#include <stdbool.h>
#include "LinkedList.h"
#include "stdio.h"

typedef struct _node {
    int id;
    float val;
    int id_prox;
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

Node *Node_create(int id, float val, int id_prox) {

    Node *n = malloc(sizeof(Node));
    n->id = id;
    n->val = val;
    n->id_prox = id_prox;
    n->next = NULL;

    return n;
}

void LinkedList_addFirst(LinkedList *L, int id, float val, int id_prox) {
    Node *p = Node_create(id, val, id_prox);
    p->next = L->begin;
    L->begin = p;

    if(L->end == NULL) {
        L->end = p;
    }
}

LinkedList *Sequencia(LinkedList *L) {

    LinkedList *new = LinkedList_create();
    Node *p = L->begin;
    Node *q;

    LinkedList_addLastSlow(new,p->id,p->val, p->id_prox);

    do {
        q = L->begin;
        while (p->id_prox != q->id) {
            q = q->next;
        }
        LinkedList_addLastSlow(new,q->id,q->val, q->id_prox);
        p = q;

    } while ((p->id_prox != 0));

    return new;

}


void LinkedList_addLastSlow(LinkedList *L, int id, float val, int id_prox) {

    Node *q = Node_create(id, val , id_prox);
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

//void LinkedList_addLastFast(LinkedList *L, int val) {
//
//    Node *q = Node_create(val);
//    if(L->begin == NULL) {
//        L->begin = q;
//        L->end = q;
//    }
//    else {
//        L->end->next = q;
//        L->end = L->end->next;
//    }
//}

void LinkedList_print(const LinkedList *L) {
    Node *p = L->begin;

    printf("L ->");

    while (p != NULL) {
        printf(" %.1f -> ", p->val);
        p = p->next;
    }
    printf("NULL");



}


