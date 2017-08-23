#pragma once

#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class ConstructionPlaceholder : public PrefabAttribute // 0x98
	{
	public:
		UnityEngine::Mesh* mesh; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* material; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
		bool renderer; // 0xa8 (size: 0x1, flags: 0x6, type: 0x2)
		bool collider; // 0xa9 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xb0
}
