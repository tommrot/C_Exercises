#include "node.h"
#include <stdio.h>
#include <stdlib.h>


void print_list(Node *head){
    Node *current = head;
    if (current == NULL){
        printf("list is empty\n");
        return;
    }
    printf("Head: ");
    while (current != NULL){
    
        //casting of value, but usage of *(int*) because value is a pointer to void, we convert in pointer to integer and access to content:
        printf("%d -> ", *(int*)(current->value));  
        current = current->next;
    }
    printf("NULL\n");
}


void print_node (Node *node){

}