#include "item.h"

void game::Item::Think() {
	Entity::Think();
}

bool game::Item::IsValid() const {
	return Entity::IsValid();
}
