//
// Created by thoma on 07/06/2024.
//

#include <stdio.h>
#include "../includes/TLinkedList.h"

int main() {

    LinkedList *L = LinkedList_create();

//    LinkedList_addFirst(L, 3);
//    LinkedList_addFirst(L, 4);
//    LinkedList_addFirst(L, 5);
//    LinkedList_addFirst(L, 23);

    LinkedList_addLastSlow(L,4);
    LinkedList_addLastSlow(L,1);
    LinkedList_addLastSlow(L,2);
    LinkedList_addLastSlow(L,3);

    LinkedList_remove(L, 3);


    LinkedList_print(L);

    return 0;
}