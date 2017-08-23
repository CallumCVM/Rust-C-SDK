#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\Collider.h"

namespace rust 
{
	class WaterSurfaceDesc : public Object // 0x0
	{
	public:
		UnityEngine::Material* material; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Renderer* renderers; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Collider* triggers; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
