#pragma once

#include "GrassSpawn.h"
#include "..\UnityEngine\MeshFilter.h"
#include "..\UnityEngine\MeshRenderer.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class GrassPatch : public MonoBehaviour // 0x18
	{
	public:
		GrassSpawn* grassSpawn; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* meshFilter; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshRenderer* meshRenderer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool ForceRefresh; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool refreshInProgress; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		bool linearColorMode; // 0x32 (size: 0x1, flags: 0x1, type: 0x2)
		float LOD; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		float size; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		float shift; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
		float maxdist; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 offset; // 0x44 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 cachedPosition; // 0x50 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x60
}
