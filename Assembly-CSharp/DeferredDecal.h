#pragma once

#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Matrix4x4.h"

namespace rust 
{
	class DeferredDecal : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Mesh* mesh; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* material; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		bool StickyGizmos; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool cached; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Matrix4x4 localToWorldMatrix; // 0x2c (size: 0x40, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
