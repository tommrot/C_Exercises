#include "item.h"
#include <stdio.h>

void print_items(Item *inventory, int counter){
    for (int i = 0; i < counter; i++){
        printf("item id: %d - item name: %s - item quantity: %d - item price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}