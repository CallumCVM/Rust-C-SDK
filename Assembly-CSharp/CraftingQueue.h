#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class CraftingQueue : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::GameObject* queueContainer; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* queueItemPrefab; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
