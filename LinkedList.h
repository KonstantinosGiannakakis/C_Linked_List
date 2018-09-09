#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct __Node{

int value;
struct __Node* next;

}Node;

typedef struct{

Node* head;
Node* tail;

int length;

}LinkedList;



#endif
