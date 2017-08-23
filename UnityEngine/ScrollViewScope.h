#pragma once

#include "..\UnityEngine\Vector2.h"

namespace rust 
{
	class ScrollViewScope : public Scope // 0x18
	{
	public:
		UnityEngine::Vector2 <scrollPosition>k__BackingField; // 0x14 (size: 0x8, flags: 0x1, type: 0x11)
		bool <handleScrollWheel>k__BackingField; // 0x1c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
