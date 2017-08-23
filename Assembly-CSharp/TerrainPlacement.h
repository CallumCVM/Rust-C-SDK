#pragma once

#include "..\TerrainSplat\Enum.h"
#include "..\TerrainBiome\Enum.h"
#include "..\TerrainTopology\Enum.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class TerrainPlacement : public PrefabAttribute // 0x98
	{
	public:
		UnityEngine::Texture2D* heightmap; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* splatmap0; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* splatmap1; // 0xa8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* alphamap; // 0xb0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* biomemap; // 0xb8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* topologymap; // 0xc0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* watermap; // 0xc8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* blendmap; // 0xd0 (size: 0x8, flags: 0x6, type: 0x12)
		bool HeightMap; // 0xd8 (size: 0x1, flags: 0x6, type: 0x2)
		bool AlphaMap; // 0xd9 (size: 0x1, flags: 0x6, type: 0x2)
		bool WaterMap; // 0xda (size: 0x1, flags: 0x6, type: 0x2)
		TerrainSplat::Enum SplatMask; // 0xdc (size: 0x4, flags: 0x6, type: 0x11)
		TerrainBiome::Enum BiomeMask; // 0xe0 (size: 0x4, flags: 0x6, type: 0x11)
		TerrainTopology::Enum TopologyMask; // 0xe4 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 size; // 0xe8 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 extents; // 0xf4 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 offset; // 0x100 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x110
}
