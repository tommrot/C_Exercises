#ifndef MODIFY_ITEM_H
#define MODIFY_ITEM_H

#include "item.h"

Item search_item_index(Item* inventory, int capacity, int id);
void modify_item(Item* inventory, int capacity);

#endif