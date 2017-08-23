#pragma once

#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "Tooltip.h"

namespace rust 
{
	class UIMapVendingMachineMarker : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Image* colorBackground; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* displayName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		Tooltip* toolTip; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color inStock; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color outOfStock; // 0x40 (size: 0x10, flags: 0x6, type: 0x11)
		bool isInStock; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
