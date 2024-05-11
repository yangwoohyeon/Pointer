#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int value) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    if (new_node == NULL) {
        printf("메모리 할당 오류\n");
        exit(1);
    }

    new_node->data = value;
    new_node->next = NULL;

    if (rear == NULL) {
        rear = new_node;
        front = new_node;
    }
    else {
        rear->next = new_node;
        rear = new_node;
    }
}

int dequeue() {
    if (front == NULL) {
        printf("언더플로우\n");
        exit(1);
    }

    struct node* del = front;
    int value = del->data;
    front = front->next;
    free(del);

    if (front == NULL) {
        rear = NULL;
    }

    return value;
}

void display() {
    struct node* i = front;

    while (i != NULL) {
        printf("%d\n", i->data);
        i = i->next;
    }

    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();

    dequeue();
    dequeue();
    display();

    return 0;
}
