#pragma once

#include "ItemDefinition.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class WaterCatcher : public LiquidContainer // 0x350
	{
	public:
		ItemDefinition* itemToCreate; // 0x350 (size: 0x8, flags: 0x6, type: 0x12)
		float maxItemToCreate; // 0x358 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 rainTestPosition; // 0x35c (size: 0xc, flags: 0x6, type: 0x11)
		float rainTestSize; // 0x368 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x370
}
