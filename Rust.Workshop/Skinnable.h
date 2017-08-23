#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Mesh.h"
#include "..\Rust\Workshop\Category.h"
#include "..\Skinnable\Group.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class Skinnable : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ItemName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::GameObject* EntityPrefab; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* EntityPrefabName; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::GameObject* ViewmodelPrefab; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* ViewmodelPrefabName; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Mesh* MeshDownloads; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
		Skinnable::Group* Groups; // 0x50 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Material* _sourceMaterials; // 0x58 (size: 0x8, flags: 0x81, type: 0x1d)
		Rust::Workshop::Category Category; // 0x60 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x68
}
