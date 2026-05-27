#include "item.h"
#include <stdlib.h>


Item* create_inventary (int capacity){
    return malloc(capacity * sizeof(Item));
}


void double_inventary (Item** inventory, int* capacity){
    *capacity *= 2;
    Item *p = realloc (*inventory, sizeof(Item) * *capacity);
    if (p != NULL){
        *inventory = p;
    } else {
        printf("failed allocation!\n");
        *capacity /= 2;
    }
}