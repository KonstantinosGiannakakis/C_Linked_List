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





Node* ListInsert(LinkedList* list, int new_value);
Node* ListFindNode(LinkedList* list, int value);
Node* ListRemove(LinkedList* list, int length);


#endif
