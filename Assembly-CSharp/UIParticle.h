#pragma once

#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Gradient.h"

namespace rust 
{
	class UIParticle : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::Gradient* InitialColor; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector2 LifeTime; // 0x20 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 Gravity; // 0x28 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 InitialX; // 0x30 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 InitialY; // 0x38 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 InitialScale; // 0x40 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 InitialDelay; // 0x48 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 ScaleVelocity; // 0x50 (size: 0x8, flags: 0x6, type: 0x11)
		float lifetime; // 0x58 (size: 0x4, flags: 0x1, type: 0xc)
		float gravity; // 0x5c (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector2 velocity; // 0x60 (size: 0x8, flags: 0x1, type: 0x11)
		float scaleVelocity; // 0x68 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x70
}
