#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class TransformInterpolator : public Object // 0x0
	{
	public:
		UnityEngine::List<TransformInterpolator.Entry>* list; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		Entry lastEntry; // 0x18 (size: 0x24, flags: 0x6, type: 0x11)
		float averageTimeSpace; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x40
}
