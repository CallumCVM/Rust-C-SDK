#pragma once

#include "SpawnFilter.h"
#include "MinMax.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Mesh.h"

namespace rust 
{
	class FoliagePlacement : public ScriptableObject // 0x18
	{
	public:
		SpawnFilter* Filter; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		MinMax* Range; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* material; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* mesh; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		float Density; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float FilterCutoff; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float FilterFade; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float FilterScaling; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float RandomScaling; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float RangeFade; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x50
}
