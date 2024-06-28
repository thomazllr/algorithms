#include "../includes/StackDigits.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Stack *Reverse(Stack *S);
void Stack_print(Stack *S);

int main()
{
    Stack *S = Stack_create();

    int n, numbers, one, two, result;

    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &numbers);
        Stack_push(S, numbers);
    }

    S = Reverse(S);

    Stack_print(S);

    while (n != 1)
    {
        Stack *S2 = Stack_create();
        one = 0;
        two = 0;

        int qty = Stack_qty(S);

        for (int i = 0; i < qty - 1; i++)
        {

            Stack_pop(S, &one);
            Stack_head(S, &two);

            result = abs(one - two);

            Stack_push(S2, result);
        }

        S2 = Reverse(S2);
        Stack_print(S2);
        S = S2;

        n--;
    }

    return 0;
}

Stack *Reverse(Stack *S)
{

    Stack *S2 = Stack_create();
    int val;
    while (!Stack_empty(S))
    {                        // Verifica se a pilha não está vazia
        Stack_pop(S, &val);  // Remove o elemento do topo
        Stack_push(S2, val); // Recoloca o valor na pilha para manter a original
    }
    return S2;
}

void Stack_print(Stack *S)
{

    Stack *S2 = Stack_create(); // Cria uma pilha auxiliar
    int val;

    // Enquanto a pilha original não estiver vazia
    while (!Stack_empty(S))
    {
        Stack_pop(S, &val);  // Remove o elemento do topo da pilha original
        printf("%d ", val);  // Imprime o valor
        Stack_push(S2, val); // Empilha o valor na pilha auxiliar
    }

    printf("\n");

    while (!Stack_empty(S2))
    {
        Stack_pop(S2, &val);
        Stack_push(S, val);
    }
}