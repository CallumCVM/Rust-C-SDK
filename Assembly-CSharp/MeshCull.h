#pragma once

#include "RendererBatch.h"
#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\MeshFilter.h"

namespace rust 
{
	class MeshCull : public LODComponent // 0x28
	{
	public:
		RendererBatch* meshBatch; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* meshRenderer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* meshFilter; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		float Distance; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		int curlod; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		bool force; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
