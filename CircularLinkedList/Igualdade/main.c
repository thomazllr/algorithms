//
// Created by thoma on 16/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "CircularLinkedList.h"

int main() {
//    printf("Hello, World!\n");

    CircList *L1 = CircList_create();
    CircList *L2 = CircList_create();

    int size = 0, size2 =0;
    scanf("%d", &size);
    for (int i = 0; i < size; ++i) {
        int number;
        scanf("%d", &number);
        CircList_add_last(L1, number);
    }

    scanf("%d", &size2);
    for (int i = 0; i < size2; ++i) {
        int number;
        scanf("%d", &number);
        CircList_add_last(L2, number);
    }



    printf("%d", Equals(L1,L2));




    return 0;
}
