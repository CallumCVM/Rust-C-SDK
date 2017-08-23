#pragma once

#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class TerrainWaterMap : public TerrainMap2D`1 // 0x48
	{
	public:
		UnityEngine::Texture2D* WaterTexture; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		float normY; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x58
}
