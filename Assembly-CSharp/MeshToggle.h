#pragma once

#include "..\UnityEngine\Mesh.h"

namespace rust 
{
	class MeshToggle : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Mesh* RendererMeshes; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Mesh* ColliderMeshes; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
