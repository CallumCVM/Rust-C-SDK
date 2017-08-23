#pragma once

#include "..\UnityEngine\Material.h"
#include "GrassMesh.h"
#include "..\UnityEngine\Transform.h"
#include "GrassMeshInfo.h"
#include "GrassPatch.h"

namespace rust 
{
	class GrassSpawn : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::Material* Material; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		GrassMesh* Types; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Transform* Anchor; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		GrassMeshInfo* MainMeshInfo; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		GrassMeshInfo* ThreadMeshInfo; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		GrassPatch* patches; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		bool ReceiveShadows; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
		bool CastShadows; // 0x49 (size: 0x1, flags: 0x6, type: 0x2)
		int PatchCount; // 0x4c (size: 0x4, flags: 0x6, type: 0x8)
		int PatchSize; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
		float MeshDensity; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float MeshScaling; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float MeshCutoff; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float MeshTapering; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		int <MeshCount>k__BackingField; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		int <VertexCount>k__BackingField; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int <TriangleCount>k__BackingField; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
