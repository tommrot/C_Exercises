#include <string.h>
#include <stdlib.h>


void quick_sort(char **words, int n){
    if (n <= 1){
        return;
    }
    int mid = n/2;
    char *temp = words[0];
    words[0] = words[mid];
    words[mid] = temp;

    char *pivot = words[0];

    char **lowers = malloc(n * sizeof(char *));
    int lc = 0;
    char **greaters = malloc(n * sizeof(char *));
    int gc = 0;

    for (int i = 1; i < n; i++){
        if (strcmp(pivot, words[i]) <= 0){
            lowers[lc++] = words[i];
        } else {
            greaters[gc++] = words[i];
        }
    }
    quick_sort(lowers, lc);
    quick_sort(greaters, gc);

    for (int i = 0; i < lc; i++){
        words[i] = lowers[i];
    }
    words[lc] = pivot;
    for (int i = 0; i < gc; i++){
        words[i + lc + 1] = greaters[i];
    }
    free(lowers);
    free(greaters);
}