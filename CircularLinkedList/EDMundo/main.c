//
// Created by thoma on 08/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "CircularLinkedList.h"


int main() {

    CircList *List =CircList_create();
    int soldados, pulos;

    scanf("%d %d", &soldados, &pulos);

    for (int i = 1; i <=soldados ;i ++) {
        CircList_add_last(List, i);
    }

    CircList_print(List);

    printf("\nJosephus:");
    printf("\n%d", Josephus(List,pulos));





    return 0;

}


