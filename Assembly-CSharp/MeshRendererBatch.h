#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\MeshFilter.h"
#include "..\UnityEngine\MeshRenderer.h"
#include "MeshRendererData.h"
#include "MeshRendererGroup.h"
#include "MeshRendererLookup.h"

namespace rust 
{
	class MeshRendererBatch : public MeshBatch // 0x28
	{
	public:
		UnityEngine::Mesh* meshBatch; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* meshFilter; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshRenderer* meshRenderer; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		MeshRendererData* meshData; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		MeshRendererGroup* meshGroup; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		MeshRendererLookup* meshLookup; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 position; // 0x58 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
