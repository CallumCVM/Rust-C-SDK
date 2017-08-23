#pragma once

#include "..\UnityEngine\Vector3.h"

namespace ProtoBuf
{
	class SpinnerWheel : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 spin; // 0x10 (size: 0xc, flags: 0x86, type: 0x11)
		bool ShouldPool; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x1d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
