#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\TerrainCollider.h"

namespace rust 
{
	class TerrainCollision : public TerrainExtension // 0x30
	{
	public:
		ListDictionary<UnityEngine.Collider,UnityEngine::List<UnityEngine.Collider>>* ignoredColliders; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::TerrainCollider* terrainCollider; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
