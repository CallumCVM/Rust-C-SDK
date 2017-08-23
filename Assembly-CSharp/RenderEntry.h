#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class RenderEntry : public ValueType // 0x0
	{
	public:
		UnityEngine::Transform* transform; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* mesh; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* material; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		bool billboard; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
