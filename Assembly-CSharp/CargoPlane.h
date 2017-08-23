#pragma once

#include "GameObjectRef.h"
#include "SpawnFilter.h"

namespace rust 
{
	class CargoPlane : public BaseEntity // 0x130
	{
	public:
		GameObjectRef* prefabDrop; // 0x130 (size: 0x8, flags: 0x6, type: 0x12)
		SpawnFilter* filter; // 0x138 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x140
}
