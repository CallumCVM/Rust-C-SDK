#pragma once

#include "..\UnityEngine\Color.h"

namespace rust 
{
	class DrawArrow : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Color color; // 0x18 (size: 0x10, flags: 0x6, type: 0x11)
		float length; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float arrowLength; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
