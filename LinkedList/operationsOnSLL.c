#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* addNodeAtEnd(int data, Node* head) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) { 
            temp = temp->next;
        }
        temp->next = newNode; 
    }
    return head;
}

Node* addNodeAtStart(int data, Node* head) {
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

Node* insertNodeAtPostion(int data, int pos, Node* head) {
    Node* temp = head;
    for(int i=0; i<pos-1; i++) {
        temp = temp->next;
    }
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

Node* insertNodeAtMiddle(int data, Node* head) {
    Node* temp = head;
    Node* curr = head;
    int length = 0;
    while(temp) {
        temp = temp->next;
        length++;
    }
    for(int i=0; i<(length/2)-1; i++) {
        curr = curr->next;
    }
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n"); 
}

int main() {
    Node* head = NULL;

    head = addNodeAtEnd(10, head);
    head = addNodeAtEnd(20, head);
    head = addNodeAtEnd(30, head);
    head = addNodeAtEnd(40, head);
    
    head = addNodeAtStart(5, head);
    
    head = insertNodeAtPostion(25, 3, head);
    
    head = insertNodeAtMiddle(22, head);

    printLinkedList(head);

    return 0;
}
