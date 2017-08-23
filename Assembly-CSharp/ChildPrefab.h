#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\GameObject.h"
#include "BaseEntity.h"

namespace rust 
{
	class ChildPrefab : public Object // 0x0
	{
	public:
		GameObjectRef* prefabToSpawn; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* origin; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* instance; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
