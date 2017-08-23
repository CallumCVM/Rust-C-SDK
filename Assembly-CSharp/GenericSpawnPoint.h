#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\Events\UnityEvent.h"

namespace rust 
{
	class GenericSpawnPoint : public BaseSpawnPoint // 0x18
	{
	public:
		GameObjectRef* spawnEffect; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Events::UnityEvent* OnObjectSpawnedEvent; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Events::UnityEvent* OnObjectRetiredEvent; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool dropToGround; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool randomRot; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
