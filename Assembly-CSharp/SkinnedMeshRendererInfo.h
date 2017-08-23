#pragma once

#include "..\UnityEngine\Rendering\ShadowCastingMode.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Bounds.h"
#include "..\SkinnedMeshRendererCache\RigInfo.h"
#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class SkinnedMeshRendererInfo : public ComponentInfo`1 // 0x20
	{
	public:
		UnityEngine::Material* material; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* mesh; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* cachedMesh; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		SkinnedMeshRendererCache::RigInfo* cachedRig; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* root; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* bones; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Rendering::ShadowCastingMode shadows; // 0x50 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Bounds bounds; // 0x54 (size: 0x18, flags: 0x6, type: 0x11)
	}; // size = 0x70
}
