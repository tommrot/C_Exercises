#include "item.h"
#include <string.h>

Item create_item (){
    int id, quantity, i = 0;
    char name[20] = {'\0'}, ch;
    float price;
    printf("insert item id: ");
    scanf ("%d", &id);
    getchar();
    printf("insert item name: ");
    while ((ch = getchar()) != '\n'){
        name[i++] = ch;
    }
    printf("insert item quantity: ");
    scanf ("%d", &quantity);
    printf("insert item price: ");
    scanf("%f", &price);
    Item new;
    new.id = id;
    strcpy(new.name, name);
    new.quantity = quantity;
    new.price = price;
    return new;
}