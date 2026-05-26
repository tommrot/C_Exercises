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
        if (next != NULL){
            next->prev = NULL; 
        }
    } else if (next == NULL){
        previous->next = NULL;
    } else {
        previous->next = next;
        next->prev = previous;
    }
    free(node_to_delete);
}