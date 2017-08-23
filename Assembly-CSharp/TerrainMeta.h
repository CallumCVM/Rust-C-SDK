#pragma once

#include "..\UnityEngine\Terrain.h"
#include "TerrainConfig.h"

namespace rust 
{
	class TerrainMeta : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Terrain* terrain; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		TerrainConfig* config; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		PaintMode paint; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		PaintMode currentPaintMode; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
