#pragma once

#include "SpawnFilter.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Transform.h"
#include "Prefab.h"
#include "DecorPatch.h"

namespace rust 
{
	class DecorSpawn : public MonoBehaviour // 0x18
	{
	public:
		SpawnFilter* Filter; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* ResourceFolder; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Transform* Anchor; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		Prefab* Prefabs; // 0x30 (size: 0x8, flags: 0x3, type: 0x1d)
		DecorPatch* patches; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int Seed; // 0x40 (size: 0x4, flags: 0x6, type: 0x9)
		float ObjectCutoff; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float ObjectTapering; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		int ObjectsPerPatch; // 0x4c (size: 0x4, flags: 0x6, type: 0x8)
		float ClusterRadius; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		int ClusterSizeMin; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
		int ClusterSizeMax; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		int PatchCount; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
		int PatchSize; // 0x60 (size: 0x4, flags: 0x6, type: 0x8)
		bool LOD; // 0x64 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x68
}
