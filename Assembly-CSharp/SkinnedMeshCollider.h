#pragma once

#include "..\UnityEngine\Bounds.h"
#include "..\UnityEngine\List.h"
#include "..\GameManifest\MeshColliderInfo.h"

namespace rust 
{
	class SkinnedMeshCollider : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<Triangle>* triangles; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Transform>* bones; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		GameManifest::MeshColliderInfo* colliderInfo; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		float rebuildTime; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Bounds bounds; // 0x34 (size: 0x18, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
