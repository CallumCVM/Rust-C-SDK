#pragma once

#include "..\GameMenu\Option.h"
#include "ItemDefinition.h"

namespace rust 
{
	class LiquidContainer : public StorageContainer // 0x2e8
	{
	public:
		GameMenu::Option __menuOption_MenuDrink; // 0x2e8 (size: 0x58, flags: 0x1, type: 0x11)
		ItemDefinition* defaultLiquid; // 0x340 (size: 0x8, flags: 0x6, type: 0x12)
		int startingAmount; // 0x348 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x350
}
