#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class InputMessage : public Object // 0x0
	{
	public:
		int buttons; // 0x10 (size: 0x4, flags: 0x86, type: 0x8)
		UnityEngine::Vector3 aimAngles; // 0x14 (size: 0xc, flags: 0x86, type: 0x11)
		bool ShouldPool; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
