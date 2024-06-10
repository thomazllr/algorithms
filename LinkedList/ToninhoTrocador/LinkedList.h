//
// Created by thoma on 07/06/2024.
//

#ifndef ALGORITHMS_LINKEDLIST_H
#define ALGORITHMS_LINKEDLIST_H

typedef struct _node Node;
typedef struct _list LinkedList;

LinkedList *LinkedList_create();
void LinkedList_addFirst(LinkedList *L, int id, float val, int id_prox);
void LinkedList_print(const LinkedList *L);
void LinkedList_addLastSlow(LinkedList *L, int id, float val, int id_prox);
void LinkedList_addLastFast(LinkedList *L, int val);

LinkedList *Sequencia(LinkedList *L);


Node *Node_create(int id, float val, int id_prox);



#endif //ALGORITHMS_LINKEDLIST_H
