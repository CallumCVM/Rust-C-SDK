#pragma once

#include "..\UnityEngine\Color.h"

namespace rust 
{
	class SubsurfaceProfileData : public ValueType // 0x0
	{
	public:
		float ScatterRadius; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color SubsurfaceColor; // 0x14 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color FalloffColor; // 0x24 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
