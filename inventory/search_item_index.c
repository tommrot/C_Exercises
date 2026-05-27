#include "item.h"

int search_item_index(Item* inventory, int capacity){
    int id;
    printf("insert id of item to modify: ");
    scanf("%d", &id);
    for (int i = 0; i < capacity; i++){
        if (inventory[i].id == id){
            return i;
        }
    }
    printf("no item with that ID in list\n");
    return -1;
}