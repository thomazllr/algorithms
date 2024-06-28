//
// Created by thoma on 08/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "../includes/LinkedList.h"

int main() {

    LinkedList *L = LinkedList_create();
    int id, id_prox;
    float val;

    while (1) {
        scanf("%d %f %d", &id, &val, &id_prox);
        if (id == 0 && id_prox == 0 && val == 0.0) {
            break;
        }
        LinkedList_addLastSlow(L, id, val, id_prox);
    }

    printf("antes:");
    LinkedList_print(L);

    printf("\ndepois:");
    LinkedList *s = LinkedList_create();
    s = Sequencia(L);

    LinkedList_print(s);




    return 0;
}

