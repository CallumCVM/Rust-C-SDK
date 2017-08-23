#pragma once

#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Mesh.h"

namespace rust 
{
	class MeshLink : public ValueType // 0x0
	{
	public:
		UnityEngine::Renderer* renderer; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* transform; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* sharedMesh; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
