#ifndef ITEM_H
#define ITEM_H

typedef struct Item {
    int id;
    char name[20];
    int quantity;
    float price;
} Item;

#endif