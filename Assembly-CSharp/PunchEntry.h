#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class PunchEntry : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 amount; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		float duration; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float startTime; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 amountAdded; // 0x24 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
