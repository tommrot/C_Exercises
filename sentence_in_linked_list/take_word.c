#include <stdio.h>
#include "node.h"
#include <stdlib.h>

char *take_word(){
    printf("insert your word: ");
    char *word = malloc(20);   //1 char occupy 1 byte
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && ch != ' '){
        word[i++] = ch;
    }
    word[i] = '\0';
    return word;
}