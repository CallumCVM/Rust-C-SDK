#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\MeshCollider.h"
#include "MeshColliderData.h"
#include "MeshColliderGroup.h"
#include "MeshColliderLookup.h"

namespace rust 
{
	class MeshColliderBatch : public MeshBatch // 0x28
	{
	public:
		UnityEngine::Mesh* meshBatch; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshCollider* meshCollider; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		MeshColliderData* meshData; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		MeshColliderGroup* meshGroup; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		MeshColliderLookup* meshLookup; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 position; // 0x50 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x60
}
