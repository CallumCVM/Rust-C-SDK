#pragma once

#include "HitArea.h"

namespace rust 
{
	class ArmorProperties : public ScriptableObject // 0x18
	{
	public:
		HitArea area; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
