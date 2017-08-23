#pragma once

#include "..\UnityEngine\Sprite.h"

namespace rust 
{
	class Resources : public ValueType // 0x0
	{
	public:
		UnityEngine::Sprite* standard; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* background; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* inputField; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* knob; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* checkmark; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* dropdown; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* mask; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x48
}
