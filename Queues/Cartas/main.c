#include <stdio.h>
#include "Queue.h"

void processDeck(int n) {
    if (n == 0) return;

    Queue* q = createQueue();
    for (int i = 1; i <= n; i++) {
        enqueue(q, i);
    }

    printf("Discarded cards:");
    int first = 1;
    while (!isEmpty(q)) {
        int discarded_card = dequeue(q);
        if (!first) {
            printf(",");
        }
        printf(" %d", discarded_card);
        if (!isEmpty(q)) {
            enqueue(q, dequeue(q));
        }
        first = 0;
    }

    printf("\nRemaining card: %d\n", dequeue(q));
    freeQueue(q);
}

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        processDeck(n);
    }
    return 0;
}