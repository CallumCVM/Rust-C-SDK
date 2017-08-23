#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\PhysicMaterial.h"

namespace rust 
{
	class MeshColliderInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::PhysicMaterial* physicMaterial; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned int hash; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
