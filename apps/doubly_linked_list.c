//
// Created by thoma on 10/06/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "../includes/DoublyLinkedList.h"

int main() {

    List *l = List_create();

   List_addLast(l, 4);
   List_addLast(l, 2);
   List_addLast(l, 3);
   List_addLast(l, 1);

    List_remove(l, 4);

    List_print(l);

    return 0;
}
