#pragma once

#include "TerrainSplatMap.h"
#include "..\UnityEngine\PhysicMaterial.h"

namespace rust 
{
	class TerrainPhysics : public TerrainExtension // 0x30
	{
	public:
		TerrainSplatMap* splat; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::PhysicMaterial* materials; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x40
}
