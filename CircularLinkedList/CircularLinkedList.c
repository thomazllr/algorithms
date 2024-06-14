//
// Created by thoma on 08/06/2024.
//

#include <stdio.h>
#include "CircularLinkedList.h"




typedef struct _circ_node {
    int val;
    struct _circ_node *next;
    struct _circ_node *prev;
} CircNode;

typedef struct _circ_list {
    CircNode *begin;
    CircNode *end;
} CircList;


CircList *CircList_create() {
    return NULL;
}


CircNode *CircNode_create(int val) {
    return NULL;
}

