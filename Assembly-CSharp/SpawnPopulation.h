#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "GameObjectRef.h"
#include "SpawnFilter.h"

namespace rust 
{
	class SpawnPopulation : public BaseScriptableObject // 0x20
	{
	public:
		UnityEngine::UnicodeString* ResourceFolder; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		GameObjectRef* ResourceList; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		SpawnFilter* Filter; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		float _targetDensity; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		float SpawnRate; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		int ClusterSizeMin; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		int ClusterSizeMax; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		int ClusterDithering; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		int SpawnAttemptsInitial; // 0x4c (size: 0x4, flags: 0x6, type: 0x8)
		int SpawnAttemptsRepeating; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
		bool EnforcePopulationLimits; // 0x54 (size: 0x1, flags: 0x6, type: 0x2)
		bool ScaleWithSpawnFilter; // 0x55 (size: 0x1, flags: 0x6, type: 0x2)
		bool ScaleWithServerPopulation; // 0x56 (size: 0x1, flags: 0x6, type: 0x2)
		bool AlignToNormal; // 0x57 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x58
}
