//
// Created by thoma on 07/06/2024.
//

#ifndef ALGORITHMS_LINKEDLIST_H
#define ALGORITHMS_LINKEDLIST_H
#include <stdbool.h>

typedef struct _node Node;
typedef struct _list LinkedList;

LinkedList *LinkedList_create();
void LinkedList_addFirst(LinkedList *L, int val);
void LinkedList_print(const LinkedList *L);
void LinkedList_addLastSlow(LinkedList *L, int val);
void LinkedList_remove(LinkedList *L, int val);
void LinkedList_remove2(LinkedList *L, int val);
void LinkedList_addLastFast(LinkedList *L, int val);
bool LinkedList_IsEmpty(const LinkedList *L);


Node *Node_create(int val);



#endif //ALGORITHMS_LINKEDLIST_H
