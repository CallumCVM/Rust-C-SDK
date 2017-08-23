#pragma once

#include "..\UnityEngine\Vector3.h"

namespace ProtoBuf
{
	class BaseEntity : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 pos; // 0x10 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 rot; // 0x1c (size: 0xc, flags: 0x86, type: 0x11)
		int flags; // 0x28 (size: 0x4, flags: 0x86, type: 0x8)
		unsigned __int64 skinid; // 0x30 (size: 0x8, flags: 0x86, type: 0xb)
		bool ShouldPool; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
