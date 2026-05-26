#include "node.h"
#include <stdlib.h>

void node_delete(Node **head, Node *node_to_delete){
    if (node_to_delete == NULL){
        printf("node not in list\n");
        return;
    }
    Node *previous = node_to_delete->prev;
    Node *next = node_to_delete->next;
    if (previous == NULL){
        *head = next;
        next->prev = NULL; 
        return;
    } else if (next == NULL){
        previous->next = NULL;
        return;
    } else {
        previous->next = next;
        next->prev = previous;
    }
    free(node_delete);
}