#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class TickInterpolator : public Object // 0x0
	{
	public:
		UnityEngine::List<TickInterpolator.Segment>* points; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		int index; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		float Length; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 CurrentPoint; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 StartPoint; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 EndPoint; // 0x38 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x48
}
