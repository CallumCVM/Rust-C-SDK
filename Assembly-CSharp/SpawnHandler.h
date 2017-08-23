#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "SpawnFilter.h"
#include "SpawnPopulation.h"
#include "SpawnDistribution.h"
#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\Dictionary<SpawnPopulation,SpawnDistribution>.h"

namespace rust 
{
	class SpawnHandler : public SingletonComponent`1 // 0x18
	{
	public:
		SpawnFilter* CharacterSpawn; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		SpawnPopulation* SpawnPopulations; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		SpawnDistribution* SpawnDistributions; // 0x28 (size: 0x8, flags: 0x3, type: 0x1d)
		SpawnDistribution* CharDistribution; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::List<SpawnGroup>* SpawnGroups; // 0x38 (size: 0x8, flags: 0x3, type: 0x15)
		SpawnPopulation* ConvarSpawnPopulations; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Collections::Generic::Dictionary<SpawnPopulation,SpawnDistribution> population2distribution; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		float TickInterval; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		int MinSpawnsPerTick; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
		int MaxSpawnsPerTick; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::LayerMask PlacementMask; // 0x5c (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::LayerMask PlacementCheckMask; // 0x60 (size: 0x4, flags: 0x6, type: 0x11)
		float PlacementCheckHeight; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::LayerMask RadiusCheckMask; // 0x68 (size: 0x4, flags: 0x6, type: 0x11)
		float RadiusCheckDistance; // 0x6c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::LayerMask BoundsCheckMask; // 0x70 (size: 0x4, flags: 0x6, type: 0x11)
		bool spawnTick; // 0x74 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x78
}
