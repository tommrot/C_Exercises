#ifndef INVENTORY_H
#define INVENTORY_h

#include "item.h"


Item* create_inventory(int capacity);
Item* double_inventory_size(Item **inventary, int *capacity);

#endif