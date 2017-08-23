#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class PrefabInstantiate : public MonoBehaviour // 0x18
	{
	public:
		GameObjectRef* Prefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
