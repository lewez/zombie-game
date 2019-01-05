#ifndef ENTITY_H
#define ENTITY_H

#include <string>

#include "position.h"
#include "ncurseswrapper.h"

namespace game {
	class Entity {
		public:
		Entity();
		Entity(std::string name);
		virtual ~Entity();

		void Draw(ncurses::Window* w);

		virtual void Think();
		virtual bool IsValid();

		std::string& GetName();
		void SetName(const std::string& name);
		int GetHealth();
		void SetHealth(const int& health);
		void Hurt(const int& damage);
		int GetMaxHealth();
		void SetMaxHealth(const int& max_health);
		Position& GetPosition();
		void SetPosition(const Position& p);
		Size& GetSize();
		void SetSize(const Size& s);

		private:
		void Initialize();

		std::string m_name;
		int m_health;
		int m_max_health;
		Position m_position;
		Size m_size;
	};
}

#endif
