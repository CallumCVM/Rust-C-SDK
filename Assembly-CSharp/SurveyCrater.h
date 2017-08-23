#pragma once

#include "..\GameMenu\Option.h"
#include "ResourceDispenser.h"

namespace rust 
{
	class SurveyCrater : public BaseCombatEntity // 0x1e8
	{
	public:
		GameMenu::Option __menuOption_Menu_AnalysisComplete; // 0x1e8 (size: 0x58, flags: 0x1, type: 0x11)
		ResourceDispenser* resourceDispenser; // 0x240 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x248
}
