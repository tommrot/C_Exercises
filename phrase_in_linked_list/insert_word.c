#include "node.h"
#include <stdlib.h>
#include <string.h>

void insert_word_in_tail(Node **head, char* word){
    Node *new = malloc(sizeof(Node));
    strcpy(new->word, word);
    new->next = NULL;
    new->previous = NULL;
    if (*head == NULL){
        *head = new;
        return;
    }
    Node *current = *head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = new;
    new->previous = current;    
}