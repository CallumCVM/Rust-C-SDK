#pragma once

#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class TerrainSplatMap : public TerrainMap3D`1 // 0x48
	{
	public:
		UnityEngine::Texture2D* SplatTexture0; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* SplatTexture1; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		int num; // 0x58 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x60
}
