#include <stdlib.h>
#include <string.h>
#include "take_word.h"
#include "node.h"

void insert_word_in_tail(Node **head){
    char *word = take_word();
    Node *new = malloc(sizeof(Node));
    strcpy(new->word, word);
    free(word);
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


void insert_word_in_head(Node **head){
    char *word = take_word(); 
    Node *new = malloc(sizeof(Node));
    strcpy(new->word, word);
    free(word);
    new->previous = NULL;
    new->next = NULL;
    if (*head == NULL){
        *head = new;
        return;
    }
    new->next = *head; 
    (*head)->previous = new;
    *head = new;   
}