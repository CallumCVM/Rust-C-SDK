#pragma once

#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class ExplosionsDeactivateRendererByTime : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Renderer* rend; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		float TimeDelay; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
