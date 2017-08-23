#pragma once

#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class TerrainBlendMap : public TerrainMap2D`1 // 0x48
	{
	public:
		UnityEngine::Texture2D* BlendTexture; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x50
}
