#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class DevBotSpawner : public FacepunchBehaviour // 0x18
	{
	public:
		GameObjectRef* bot; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* waypoints; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Transform* waypointParent; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<BaseEntity>* _spawned; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		bool autoSelectLatestSpawnedGameObject; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		float spawnRate; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		int maxPopulation; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x48
}
