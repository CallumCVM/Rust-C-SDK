#pragma once

#include "ResourceDispenser.h"
#include "ItemDefinition.h"

namespace rust 
{
	class HelicopterDebris : public ServerGib // 0x228
	{
	public:
		ResourceDispenser* resourceDispenser; // 0x228 (size: 0x8, flags: 0x1, type: 0x12)
		ItemDefinition* metalFragments; // 0x230 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* hqMetal; // 0x238 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* charcoal; // 0x240 (size: 0x8, flags: 0x6, type: 0x12)
		float tooHotUntil; // 0x248 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x250
}
