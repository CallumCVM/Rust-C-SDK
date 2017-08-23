#pragma once

#include "..\UnityEngine\GameObject.h"
#include "TerrainMeta.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class WorldSetup : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::GameObject* terrain; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* decorPrefab; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* grassPrefab; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* spawnPrefab; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		TerrainMeta* terrainMeta; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<ProceduralObject>* ProceduralObjects; // 0x40 (size: 0x8, flags: 0x3, type: 0x15)
		bool AutomaticallySetup; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
		unsigned int EditorSeed; // 0x4c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int EditorSalt; // 0x50 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x58
}
