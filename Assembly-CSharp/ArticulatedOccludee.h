#pragma once

#include "..\UnityEngine\LODGroup.h"
#include "..\UnityEngine\List.h"
#include "OccludeeSphere.h"
#include "..\UnityEngine\SkinnedMeshRenderer.h"

namespace rust 
{
	class ArticulatedOccludee : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::LODGroup* lodGroup; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.Renderer>* renderers; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Collider>* colliders; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		OccludeeSphere localOccludee; // 0x30 (size: 0x20, flags: 0x1, type: 0x11)
		UnityEngine::SkinnedMeshRenderer* fixedBoundsRef; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool registerCullingOnStart; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		bool isVisible; // 0x59 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
