#include <stdio.h>
#include "insert_item.h"
#include "modify_item.h"
#include "delete_item.h"
#include "print_items.h"


int main(void){
    int capacity = 10, counter = 0, id;
    Item* inventory = NULL;
    char ch;
    printf("digit your command: ");
    while ((ch = getchar()) != 'q'){
        if (ch == 'i'){
            if (counter == 0){
                inventory = create_inventory(capacity);
            } 
            insert_item(&inventory, &counter, &capacity);
        }
        else if (ch == 'm'){
            modify_item(inventory, capacity);
        }
        else if (ch == 'd'){
            delete_item(inventory, &counter, capacity);
        }
        else if (ch == 'p'){
            print_items(inventory, counter);
        } else {
            continue;
        }
    }
    free(inventory);
    return 0;
}