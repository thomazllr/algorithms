//
// Created by thoma on 07/06/2024.
//

#include <stdio.h>
#include "LinkedList.h"

int main() {

    LinkedList *L = LinkedList_create();

//    LinkedList_addFirst(L, 3);
//    LinkedList_addFirst(L, 4);
//    LinkedList_addFirst(L, 5);
//    LinkedList_addFirst(L, 23);

    LinkedList_addLast(L,4);
    LinkedList_addLast(L,3);
    LinkedList_addLast(L,2);
    LinkedList_addLast(L,1);


    LinkedList_print(L);

    return 0;
}