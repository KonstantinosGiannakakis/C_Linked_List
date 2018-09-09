#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef void* Node;
typedef void* LinkedList;

Node* ListInsert(LinkedList* list, int new_value);
Node* ListFindNode(LinkedList* list, int value);
Node* ListRemove(LinkedList* list, int length);

#endif
