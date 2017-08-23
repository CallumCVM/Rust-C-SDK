#pragma once

#include "..\GameMenu\Option.h"

namespace rust 
{
	class EngineSwitch : public BaseEntity // 0x130
	{
	public:
		GameMenu::Option __menuOption_Menu_StartEngine; // 0x130 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_StopEngine; // 0x188 (size: 0x58, flags: 0x1, type: 0x11)
	}; // size = 0x1e0
}
