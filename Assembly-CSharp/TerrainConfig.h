#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\PhysicMaterial.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\TerrainConfig\SplatType.h"

namespace rust 
{
	class TerrainConfig : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::PhysicMaterial* GenericMaterial; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* Material; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* SplatAtlas; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* NormalAtlas; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		TerrainConfig::SplatType* Splats; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		bool CastShadows; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::LayerMask GroundMask; // 0x44 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::LayerMask WaterMask; // 0x48 (size: 0x4, flags: 0x6, type: 0x11)
		float HeightMapErrorMin; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float HeightMapErrorMax; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float BaseMapDistanceMin; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float BaseMapDistanceMax; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float ShaderLodMin; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float ShaderLodMax; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x68
}
