#pragma once

#include "..\GameMenu\Option.h"
#include "ProceduralLiftCabin.h"
#include "ProceduralLiftStop.h"

namespace rust 
{
	class ProceduralLift : public BaseEntity // 0x130
	{
	public:
		GameMenu::Option __menuOption_Menu_UseLift; // 0x130 (size: 0x58, flags: 0x1, type: 0x11)
		ProceduralLiftCabin* cabin; // 0x188 (size: 0x8, flags: 0x6, type: 0x12)
		ProceduralLiftStop* stops; // 0x190 (size: 0x8, flags: 0x6, type: 0x1d)
		float movementSpeed; // 0x198 (size: 0x4, flags: 0x6, type: 0xc)
		float resetDelay; // 0x19c (size: 0x4, flags: 0x6, type: 0xc)
		int floorIndex; // 0x1a0 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x1a8
}
