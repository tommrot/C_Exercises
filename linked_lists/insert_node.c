#include "node.h"
#include <stdlib.h>
#include <stdio.h>

void list_insert_in_head (Node **head, int value){
    Node *new = malloc(sizeof(Node));
    if (new = NULL){
        printf("Allocation Error!\n");
        exit(0);
    }
    new->value = value;   
    new->next = *head;   //assigning actual head to parameter next
    *head = new;      //assigning head pointer to new's node pointer
}



void list_insert_after (Node *previous, int value){
    Node *new = malloc(sizeof(Node));
    if (new == NULL){
        printf("Allocation Error!\n");
        exit(0);
    }
    new->value = value;
    new->next = previous->next;
    previous->next = new;
}



void list_append(Node **head, int value){
    Node *new = head;
    if (new = NULL){
        printf("Allocation Error!\n");
        exit(0);
    } 
    new->value = value;
    new->next = NULL;

    if (*head = NULL){
        *head = new;
        return;
    }
    Node *current = head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = new;
}