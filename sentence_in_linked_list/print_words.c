#include <stdio.h>

#include "node.h"

//print from head to tail:

void print_words(Node *head){
    if (head == NULL) return;
    Node *curr = head;
    while (curr != NULL){
        printf("%s ", curr->word);
        curr = curr->next;
    }
    printf("\n");
}

//print from tail to head:

void print_reverse(Node *head){
    if (head == NULL) return;
    Node *curr = head;
    while (curr->next != NULL){
        curr = curr->next;
    }
    while (curr != NULL){
        printf("%s ", curr->word);
        curr = curr->previous;
    }
    printf("\n");
}


