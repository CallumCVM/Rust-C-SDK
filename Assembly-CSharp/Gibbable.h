#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\PhysicMaterial.h"
#include "GameObjectRef.h"

namespace rust 
{
	class Gibbable : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* gibSource; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* materialSource; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::PhysicMaterial* physicsMaterial; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* fxPrefab; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		bool copyMaterialBlock; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		bool spawnFxPrefab; // 0x39 (size: 0x1, flags: 0x6, type: 0x2)
		bool important; // 0x3a (size: 0x1, flags: 0x6, type: 0x2)
		float explodeScale; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float scaleOverride; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
