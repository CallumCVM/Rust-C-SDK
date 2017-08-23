#pragma once

#include "..\UnityEngine\Terrain.h"
#include "TerrainConfig.h"

namespace rust 
{
	class TerrainExtension : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Terrain* terrain; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		TerrainConfig* config; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		bool isInitialized; // 0x28 (size: 0x1, flags: 0x86, type: 0x2)
	}; // size = 0x30
}
