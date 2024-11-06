#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node head = NULL;

void insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = (struct Node *)malloc(size(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}


int main() {

    insertAtBeginning(head, 10);
}