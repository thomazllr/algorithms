#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Definindo o tamanho máximo da fila como 100 (exemplo)

// Estrutura para representar uma transferência PixED
typedef struct
{
    int id_orig;
    int id_dest;
    float valor;
} PixED;

// Estrutura para a fila
typedef struct
{
    PixED items[MAX_SIZE];
    int front, rear;
    int size;
} Queue;

// Inicializa a fila
void initQueue(Queue *q)
{
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

int isEmpty(Queue *q)
{
    return q->size == 0;
}

int isFull(Queue *q)
{
    return q->size == MAX_SIZE;
}

void enqueue(Queue *q, PixED item)
{
    if (!isFull(q))
    {
        q->rear = (q->rear + 1) % MAX_SIZE;
        q->items[q->rear] = item;
        q->size++;
    }
}

void dequeue(Queue *q)
{
    if (!isEmpty(q))
    {
        printf("(%d, %d, %.2f),", q->items[q->front].id_orig, q->items[q->front].id_dest, q->items[q->front].valor);
        q->front = (q->front + 1) % MAX_SIZE;
        q->size--;
    }
}

int main()
{
    int N;
    scanf("%d", &N); // Tamanho máximo da fila

    Queue q;
    initQueue(&q);

    int id_orig, id_dest;
    float valor;

    while (scanf("%d %d %f", &id_orig, &id_dest, &valor) == 3)
    {
        if (id_orig == 0 && id_dest == 0)
        {
            while (!isEmpty(&q))
            {
                dequeue(&q);
            }
            printf("\n");
            break;
        }

        PixED transaction = {id_orig, id_dest, valor};
        enqueue(&q, transaction);

        if (isFull(&q))
        {
            // Quando a fila atinge o tamanho máximo, esvaziar a fila
            while (!isEmpty(&q))
            {
                dequeue(&q);
            }
            printf("\n");
        }
    }

    return 0;
}
