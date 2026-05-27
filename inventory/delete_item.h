#ifndef DELETE_ITEM_H
#define DELETE_ITEM_H


#include "item.h"

void switch_items(Item* item1, Item* item2);
int search_item_index(Item *inventory, int id, int capacity);
void delete_item(Item *inventory, int *counter, int capacity);

#endif