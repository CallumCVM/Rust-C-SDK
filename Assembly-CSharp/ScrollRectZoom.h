#pragma once

#include "..\UnityEngine\UI\ScrollRectEx.h"

namespace rust 
{
	class ScrollRectZoom : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::ScrollRectEx* scrollRect; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float zoom; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		bool smooth; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		float max; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float min; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float velocity; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
