#pragma once

#include "..\MeshLOD\State.h"
#include "RendererBatch.h"
#include "..\UnityEngine\MeshRenderer.h"
#include "..\UnityEngine\MeshFilter.h"

namespace rust 
{
	class MeshLOD : public LODComponent // 0x28
	{
	public:
		MeshLOD::State* States; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		RendererBatch* meshBatch; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshRenderer* meshRenderer; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* meshFilter; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		int curlod; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		bool force; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
