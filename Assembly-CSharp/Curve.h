#pragma once

#include "..\UnityEngine\Color.h"

namespace rust 
{
	class Curve : public PropertyAttribute // 0x18
	{
	public:
		UnityEngine::Color color; // 0x14 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
