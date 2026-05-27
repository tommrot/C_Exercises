#include "item.h"
#include "inventory.h"
#include "create_item.h"
#include <stdlib.h>
#include <stdio.h>


void insert_item (Item** inventory, int* counter, int* capacity){    // Item** inventory because in double_inventory_size maybe *inventory will be modify
    if (*counter == *capacity){
        double_inventory_size(inventory, capacity);
    }
    Item new = create_item();
    (*inventory)[*counter] = new;
    (*counter)++;
}