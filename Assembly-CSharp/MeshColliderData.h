#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class MeshColliderData : public Object // 0x0
	{
	public:
		UnityEngine::List<int>* triangles; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.Vector3>* vertices; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.Vector3>* normals; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x28
}
