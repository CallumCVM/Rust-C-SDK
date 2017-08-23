#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\MeshRenderer.h"
#include "..\UnityEngine\MeshFilter.h"
#include "RendererGroup.h"
#include "MeshRendererInstance.h"

namespace rust 
{
	class RendererBatch : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* <BatchTransform>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshRenderer* <BatchRenderer>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* <BatchFilter>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		RendererGroup* batchGroup; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		MeshRendererInstance batchInstance; // 0x38 (size: 0x88, flags: 0x1, type: 0x11)
		bool disabled; // 0xc0 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xc8
}
