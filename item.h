#ifndef ITEM_H
#define ITEM_H

#include "entity.h"

namespace game {
	class Item : public Entity {
		public:
		void Think(const InputManager* const inputmgr);
		bool IsValid() const;

		private:
	};
}

#endif
