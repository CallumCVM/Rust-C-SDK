#pragma once

#include "PieShape.h"
#include "..\UnityEngine\UI\Image.h"

namespace rust 
{
	class PieOption : public MonoBehaviour // 0x18
	{
	public:
		PieShape* background; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* imageIcon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
