#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class FlameExplosive : public TimedExplosive // 0x168
	{
	public:
		GameObjectRef* createOnExplode; // 0x168 (size: 0x8, flags: 0x6, type: 0x12)
		float numToCreate; // 0x170 (size: 0x4, flags: 0x6, type: 0xc)
		float minVelocity; // 0x174 (size: 0x4, flags: 0x6, type: 0xc)
		float maxVelocity; // 0x178 (size: 0x4, flags: 0x6, type: 0xc)
		float spreadAngle; // 0x17c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x180
}
