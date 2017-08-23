#pragma once

#include "Water.h"
#include "..\ConsoleSystem\Command.h"

namespace rust 
{
	class ConvarWater : public MonoBehaviour // 0x18
	{
	public:
		Water* water; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		ConsoleSystem::Command* water_quality; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
