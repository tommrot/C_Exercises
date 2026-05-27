#include "item.h"
#include <stdio.h>

void quick_sort(Item *inventary, int counter);

void print_items(Item *inventory, int counter){
    quick_sort(inventory, counter);
    for (int i = 0; i < counter; i++){
        printf("item id: %d - item name: %s - item quantity: %d - item price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}


void quick_sort(Item *inventary, int counter){
    if (counter <= 1){
        return;
    }
    Item lower[counter];
    int lc = 0;
    Item higher[counter];
    int hc = 0;
    int mid = counter / 2;
    
    Item temp = inventary[0];
    inventary[0] = inventary[mid];
    inventary[mid] = temp;
    Item pivot = inventary[0];
    for (int i = 1; i < counter; i++){
        if (inventary[i].id > pivot.id){
            higher[hc++] = inventary[i];
        } else {
            lower[lc++] = inventary[i];
        }
    }
    quick_sort(lower, lc);
    quick_sort(higher, hc);

    for (int i = 0; i < lc; i++){
        inventary[i] = lower[i];
    }
    inventary[lc] = pivot;
    for (int i = 0; i < hc; i++){
        inventary[i + 1 + lc] = higher[i]; 
    }
}