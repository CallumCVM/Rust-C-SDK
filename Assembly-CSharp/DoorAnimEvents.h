#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class DoorAnimEvents : public MonoBehaviour // 0x18
	{
	public:
		GameObjectRef* openStart; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* openEnd; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* closeStart; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* closeEnd; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
