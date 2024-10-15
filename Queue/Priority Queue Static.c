#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct da {
    int data;
    int priority;
};

typedef struct pq {
    struct da items[SIZE];
    int rear;
} pq;

void init(pq *p) {
    p->rear = -1;
}

int isEmpty(pq *p) {
    return p->rear == -1;
}

int isFull(pq *p) {
    return p->rear == SIZE - 1;
}

void addQ(pq *p) {
    int i = p->rear, priority, data;

    if (!isFull(p)) {
        printf("Enter Data and Priority : \n");
        printf("Data : ");
        scanf("%i", &data);
        printf("Priority : ");
        scanf("%i", &priority);

        p->rear++;
        while (i >= 0 && p->items[i].priority > priority) {
            p->items[i + 1] = p->items[i];
            i--;
        }

        p->items[i + 1].data = data;
        p->items[i + 1].priority = priority;

        printf("Element added to the queue.\n");
    } else {
        printf("Queue is full!\n");
    }
}

void delQ(pq *p) {
    if (!isEmpty(p)) {
        int data = p->items[0].data;
        int priority = p->items[0].priority;

        for (int i = 0; i < p->rear; i++) {
            p->items[i] = p->items[i + 1];
        }

        p->rear--;

        printf("Deleted Element: %d with Priority: %d\n", data, priority);
    } else {
        printf("Queue is empty. \n");
    }
}

int main() {
    int choice;
    pq p;

    init(&p);

    printf("1. Add Element\n");
    printf("2. Delete Element\n");
    printf("3. Exit\n\n");

    while (1) {
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addQ(&p);
                break;

            case 2:
                delQ(&p);
                break;

            case 3:
                exit(0);

            default:
                printf("Enter a valid choice.\n");
        }
    }

    return 0;
}

