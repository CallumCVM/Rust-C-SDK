#pragma once

#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class InstancingKey : public ValueType // 0x0
	{
	public:
		UnityEngine::Mesh* mesh; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		int submeshIndex; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Material* material; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		int shaderPass; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
