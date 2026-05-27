#ifndef NODE_H
#define NODE_H

typedef struct Node {
    char word[20];
    struct Node* next;
    struct Node* previous; 
} Node;

#endif