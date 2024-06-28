//
// Created by thoma on 08/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "../includes/CircularLinkedList.h"


int main() {

    CircList *L = CircList_create();

    CircList_add_last(L, 5);
    CircList_add_last(L, 3);
    CircList_add_last(L, 2);
    CircList_add_last(L, 1);

    CircList_print(L);
    printf(" \n\n");

//    CircList_remove(L, 5);
    CircList_remove(L, 3);
    CircList_print(L);
    printf(" \n\n");

    CircList_remove(L, 1);
    CircList_print(L);
    printf(" \n\n");

//    CircList_inverted_print(L);
    return 0;

}


