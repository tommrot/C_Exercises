#include "item.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


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

void modify_item(Item* inventory, int capacity){
    char name[20] = {'\0'}, ch;
    int i = 0, quantity; 
    float price;
    int item_index = search_item_index(inventory, capacity);
    if (item_index == -1) return;
    printf("insert new name: ");
    while ((ch = getchar()) != '\n' && i < 19){
        name[i++] = ch;
    }
    strcpy(inventory[item_index].name, name);
    printf("insert new quantity of %s: ", inventory[item_index].name);
    scanf("%d", &quantity);
    printf("insert new price for %s: ", inventory[item_index].name);
    scanf("%f", &price);
    inventory[item_index].price = price;
    inventory[item_index].quantity = quantity;
}
