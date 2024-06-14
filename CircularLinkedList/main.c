//
// Created by thoma on 08/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "CircularLinkedList.h"


int main() {

    CircList *L = CircList_create();

    CircList_add_first(L, 5);
    CircList_add_first(L, 3);
    CircList_add_first(L, 2);
    CircList_add_first(L, 1);

    CircList_print(L);

    return 0;

}


