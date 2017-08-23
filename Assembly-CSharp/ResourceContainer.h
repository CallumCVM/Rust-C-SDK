#pragma once

#include "..\GameMenu\Option.h"

namespace rust 
{
	class ResourceContainer : public EntityComponent`1 // 0x20
	{
	public:
		GameMenu::Option __menuOption_MenuLoot; // 0x20 (size: 0x58, flags: 0x1, type: 0x11)
		bool lootable; // 0x78 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x80
}
