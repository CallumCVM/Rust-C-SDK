#pragma once

#include "..\PlantProperties\State.h"
#include "GameObjectRef.h"

namespace rust 
{
	class Stage : public ValueType // 0x0
	{
	public:
		PlantProperties::State nextState; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		float lifeLength; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float health; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float resources; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		GameObjectRef* skinObject; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
