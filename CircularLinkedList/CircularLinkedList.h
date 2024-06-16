//
// Created by thoma on 08/06/2024.
//

#ifndef ALGORITHMS_CIRCULARLINKEDLIST_H
#define ALGORITHMS_CIRCULARLINKEDLIST_H


#include <stdbool.h>

typedef struct _circ_node CircNode;

typedef struct _circ_list CircList;

CircList *CircList_create();
CircNode *CircNode_create(int val);

void CircList_print(const CircList *L);
void CircList_inverted_print(const CircList *L);


bool CircList_is_empty(const CircList *L);
void CircList_add_first(CircList *L, int val);
void CircList_add_last(CircList *L, int val);
void CircList_remove(CircList *L, int val);


#endif //ALGORITHMS_CIRCULARLINKEDLIST_H
