#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "T.h"

namespace rust 
{
template <typename T0>
	class ShaderParameters : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		T Arid; // 0x18 (size: 0x8, flags: 0x6, type: 0x13)
		T Temperate; // 0x20 (size: 0x8, flags: 0x6, type: 0x13)
		T Tundra; // 0x28 (size: 0x8, flags: 0x6, type: 0x13)
		T Arctic; // 0x30 (size: 0x8, flags: 0x6, type: 0x13)
		T* climates; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x40
}
