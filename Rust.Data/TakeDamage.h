#pragma once

#include "..\UnityEngine\Vector3.h"

namespace ProtoBuf
{
	class TakeDamage : public Object // 0x0
	{
	public:
		float amount; // 0x10 (size: 0x4, flags: 0x86, type: 0xc)
		UnityEngine::Vector3 direction; // 0x14 (size: 0xc, flags: 0x86, type: 0x11)
		int type; // 0x20 (size: 0x4, flags: 0x86, type: 0x8)
		bool ShouldPool; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x25 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
