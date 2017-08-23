#pragma once

#include "..\UnityEngine\Mesh.h"

namespace rust 
{
	class ResourceStage : public Object // 0x0
	{
	public:
		UnityEngine::Mesh* renderMesh; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* collisionMesh; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float health; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
