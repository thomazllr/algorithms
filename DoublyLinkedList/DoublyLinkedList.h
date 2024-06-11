//
// Created by thoma on 10/06/2024.
//


#ifndef ALGORITHMS_DOUBLYLINKEDLIST_H
#define ALGORITHMS_DOUBLYLINKEDLIST_H

#include <stdio.h>
#include <stdbool.h>


typedef struct _doubly_node Node;

typedef struct _doubly_linked_list List;

List *List_create();
bool List_IsEmpty(const List *L);
void List_addFirst(List *L, int val);
void List_remove(List *L, int val);
void List_addLast(List *L, int val);
void List_print(const List *L);



Node *Node_create(int val);


#endif //ALGORITHMS_DOUBLYLINKEDLIST_H
