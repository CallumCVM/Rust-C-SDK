#pragma once

#include "..\UnityEngine\Vector2.h"

namespace rust 
{
	class PointerState : public Object // 0x0
	{
	public:
		UnityEngine::Vector2 lastPos; // 0x10 (size: 0x8, flags: 0x6, type: 0x11)
		bool isDown; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
