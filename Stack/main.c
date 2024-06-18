#include "Stack.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char msg[] = "Hello World";
    Stack *stack = Stack_create();
    for (int i = 0; i < strlen(msg); i++)
        Stack_push(stack, msg[i]);
    int c;
    while (Stack_pop(stack, &c))
        printf("%c", c);
    return 0;
}