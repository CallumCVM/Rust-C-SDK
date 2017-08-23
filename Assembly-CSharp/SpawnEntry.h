#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class SpawnEntry : public Object // 0x0
	{
	public:
		GameObjectRef* prefab; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		int weight; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		bool mobile; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
