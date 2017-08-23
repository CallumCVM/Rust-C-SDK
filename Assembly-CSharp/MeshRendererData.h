#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class MeshRendererData : public Object // 0x0
	{
	public:
		UnityEngine::List<int>* triangles; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.Vector3>* vertices; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.Vector3>* normals; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.Vector4>* tangents; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.Color32>* colors32; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.Vector2>* uv; // 0x38 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.Vector2>* uv2; // 0x40 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.Vector4>* positions; // 0x48 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x50
}
