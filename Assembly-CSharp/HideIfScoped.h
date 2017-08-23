#pragma once

#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class HideIfScoped : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Renderer* renderers; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
