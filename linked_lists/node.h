#ifndef NODE_H
#define NODE_H

typedef struct Node {
    void *value;
    struct Node *next; 
    struct Node *prev;
} Node;

#endif