#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Rendering\ShadowCastingMode.h"

namespace rust 
{
	class RendererKey : public ValueType // 0x0
	{
	public:
		UnityEngine::Material* material; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rendering::ShadowCastingMode shadows; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		int layer; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
