#pragma once

#include "..\UnityEngine\Color.h"

namespace rust 
{
	class ColorWheelsSettings : public ValueType // 0x0
	{
	public:
		UnityEngine::Color shadows; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color midtones; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color highlights; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
