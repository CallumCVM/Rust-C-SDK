#pragma once

#include "..\UnityEngine\List.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\MeshCollider.h"
#include "..\UnityEngine\MeshFilter.h"
#include "..\UnityEngine\MeshRenderer.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class StagedResourceEntity : public ResourceEntity // 0x140
	{
	public:
		UnityEngine::List<StagedResourceEntity.ResourceStage>* stages; // 0x140 (size: 0x8, flags: 0x6, type: 0x15)
		GameObjectRef* changeStageEffect; // 0x148 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::MeshCollider* meshCollider; // 0x150 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::MeshFilter* meshFilter; // 0x158 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::MeshRenderer* meshRenderer; // 0x160 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::GameObject* gibSourceTest; // 0x168 (size: 0x8, flags: 0x6, type: 0x12)
		int stage; // 0x170 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x178
}
