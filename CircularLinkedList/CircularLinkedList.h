//
// Created by thoma on 08/06/2024.
//

#ifndef ALGORITHMS_CIRCULARLINKEDLIST_H
#define ALGORITHMS_CIRCULARLINKEDLIST_H


typedef struct _circ_node CircNode;

typedef struct _circ_list CircList;

CircList *CircList_create();
CircNode *CircNode_create(int val);


#endif //ALGORITHMS_CIRCULARLINKEDLIST_H
