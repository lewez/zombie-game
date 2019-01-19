#ifndef CHARACTER_H
#define CHARACTER_H

#include "entity.h"

namespace game {
	class Character : public Entity {
		public:
		virtual ~Character();
		virtual void Think();
		virtual bool IsValid() const;

		private:
		int strength;
		int defence;
		int speed;
	};
}

#endif
