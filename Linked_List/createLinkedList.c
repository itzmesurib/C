#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

int main() {
    Node* first = (Node *)malloc(sizeof(Node));
    Node* second = (Node *)malloc(sizeof(Node));
    Node* third = (Node *)malloc(sizeof(Node));

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;

    Node* temp = first;
    while(temp) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}