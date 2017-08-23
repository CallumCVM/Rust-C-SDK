#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class SpawnGroup : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<SpawnGroup.SpawnEntry>* prefabs; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		int maxPopulation; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int numToSpawnPerTickMin; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		int numToSpawnPerTickMax; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		float respawnDelayMin; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float respawnDelayMax; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		bool wantsInitialSpawn; // 0x34 (size: 0x1, flags: 0x6, type: 0x2)
		bool temporary; // 0x35 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
