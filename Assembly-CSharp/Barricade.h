#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class Barricade : public DecayEntity // 0x1f0
	{
	public:
		GameObjectRef* reflectEffect; // 0x1f0 (size: 0x8, flags: 0x6, type: 0x12)
		float reflectDamage; // 0x1f8 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x200
}
