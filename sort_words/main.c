#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quicksort.h"




int read_word(char *word, int n);

int main(void){
    char **words = NULL;
    char word[20] = {'\0'};
    int counter = 0;
    while(1){
        printf("enter your word: ");
        if (read_word(word, 20) == 0){
            break;
        }
        words = realloc(words, (counter + 1) * sizeof(char *));

        words[counter] = malloc(strlen(word) + 1);
        strcpy(words[counter], word);
        counter++;
    }
    quick_sort(words, counter);  
    for (int i = 0; i < counter; i++){
        free(words[i]);  // we free each word
    }  
    free(words);  //we free array of pointers
}
    
int read_word(char *word, int n){
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n' && i < n - 1){
        word[i++] = ch;
    }
    word[i] = '\0';
    return i;
}




