#include "node.h"
#include <stdlib.h>

int list_search (Node *head, int searched){
    Node *current = head;
    while (current != NULL){
        if (*(int*)(current->value) == searched){
            return current;
        }
        current = current->next;
    }
    return NULL;
}


