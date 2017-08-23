#pragma once

#include "..\UnityEngine\Rendering\ShadowCastingMode.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Mesh.h"

namespace rust 
{
	class MeshRendererInfo : public ComponentInfo`1 // 0x20
	{
	public:
		UnityEngine::Material* material; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* mesh; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rendering::ShadowCastingMode shadows; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
