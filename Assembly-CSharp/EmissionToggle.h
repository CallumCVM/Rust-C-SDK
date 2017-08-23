#pragma once

#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class EmissionToggle : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Renderer* targetRenderers; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Color emissionColor; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
		int materialIndex; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
