#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Mesh.h"
#include "FoliageGroup.h"
#include "MeshInstance.h"

namespace rust 
{
	class FoliageRenderer : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Material* material; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* LOD0; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* LOD1; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		FoliageGroup* batchGroup; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		MeshInstance batchInstance; // 0x38 (size: 0x30, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
