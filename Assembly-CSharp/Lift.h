#pragma once

#include "..\GameMenu\Option.h"

namespace rust 
{
	class Lift : public AnimatedBuildingBlock // 0x208
	{
	public:
		GameMenu::Option __menuOption_Menu_UseLift; // 0x208 (size: 0x58, flags: 0x1, type: 0x11)
		float resetDelay; // 0x260 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x268
}
