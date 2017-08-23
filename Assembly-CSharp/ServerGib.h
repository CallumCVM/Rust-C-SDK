#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\PhysicMaterial.h"
#include "..\UnityEngine\MeshFilter.h"
#include "..\UnityEngine\MeshRenderer.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\MeshCollider.h"

namespace rust 
{
	class ServerGib : public BaseCombatEntity // 0x1e8
	{
	public:
		UnityEngine::GameObject* _gibSource; // 0x1e8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* _gibName; // 0x1f0 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::PhysicMaterial* physicsMaterial; // 0x1f8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::MeshFilter* meshFilter; // 0x200 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshRenderer* meshRenderer; // 0x208 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rigidbody* rigidBody; // 0x210 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshCollider* meshCollider; // 0x218 (size: 0x8, flags: 0x1, type: 0x12)
		bool initialized; // 0x220 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x228
}
