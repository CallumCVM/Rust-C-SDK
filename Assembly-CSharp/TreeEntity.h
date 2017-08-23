#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class TreeEntity : public ResourceEntity // 0x140
	{
	public:
		GameObjectRef* prefab; // 0x140 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* instance; // 0x148 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x150
}
