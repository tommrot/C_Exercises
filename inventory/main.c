#include <stdio.h>
#include "insert_item.h"
#include "modify_item.h"



int main(void){
    int capacity = 10, counter = 0, id;
    Item* inventory;
    char ch;
    printf("digit your command: ");
    while ((ch = getchar()) != 'i' && ch != 'm' && ch != 'd' || ch != 'p'){
        if (ch == 'i'){
            if (counter == 0){
                inventory = create_inventory(capacity);
            } else {
                insert_item(&inventory, &counter, &capacity);
            }
        }
        if (ch == 'm'){
            modify_item(inventory, capacity);
        }
    }
}