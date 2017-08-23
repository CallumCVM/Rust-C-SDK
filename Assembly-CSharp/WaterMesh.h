#pragma once

#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class WaterMesh : public Object // 0x0
	{
	public:
		UnityEngine::Mesh* borderMesh; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Mesh* centerPatch; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3* borderVerticesLocal; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Vector3* borderVerticesWorld; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		int borderRingCount; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		float borderRingSpacingFalloff; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		int resolution; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		bool initialized; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
