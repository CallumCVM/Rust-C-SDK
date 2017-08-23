#pragma once

#include "..\BufferList<UnityEngine\Matrix4x4>.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class InstancingBuffer : public Object // 0x0
	{
	public:
		BufferList<UnityEngine::Matrix4x4> matrices; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Mesh* mesh; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* material; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int submeshIndex; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int shaderPass; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
