#include <stdio.h>
#include "insert_word.h"
#include "print_words.h"
#include "node.h"


int main(void){
    Node *head = NULL;   //head is the pointer to the first node
    char ch;
    printf("insert your instruction, i for insert top, b for insert at the end, p for print, r for print in reverse order, q for quitting: ");
    while ((ch = getchar()) != 'q'){
        getchar();
        if (ch == 'i'){
            insert_word_in_head(&head);
        } else if (ch == 'b'){
            insert_word_in_tail(&head);
        } else if (ch == 'p'){
            print_words(head);
        } else if (ch == 'r'){
            print_reverse(head);
        }

    }    
}