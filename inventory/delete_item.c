#include "item.h"
#include "search_item_index.h"

void switch_items(Item* item1, Item* item2){
    Item temp = *item1;
    *item1 = *item2;
    *item2 = temp;
}


void delete_item(Item *inventory, int *counter, int capacity){
    int index = search_item_index(inventory, capacity);
    if (index == -1) return;
    for (int i = index; i < *counter; i++){
        switch_items(&inventory[i], &inventory[i+1]);
    }
    (*counter)--;
}