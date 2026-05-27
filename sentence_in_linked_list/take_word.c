#include <stdio.h>
#include <stdlib.h>

#include "node.h"

char *take_word(){
    printf("insert your word: ");
    char *word = malloc(20);   // 1 char occupies 1 byte, and we use malloc because heap's memory is saved outside function stack, and we need it in caller function
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && ch != ' '){
        word[i++] = ch;
    }
    word[i] = '\0';
    return word;
}