#pragma once

#include "..\UnityEngine\Color.h"

namespace UnityEngine
{
	class GradientColorKey : public ValueType // 0x0
	{
	public:
		UnityEngine::Color color; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		float time; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
