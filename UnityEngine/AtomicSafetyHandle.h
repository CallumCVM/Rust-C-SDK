#pragma once

#include "..\UnityEngine\AtomicSafetyHandleVersionMask.h"

namespace UnityEngine
{
	class AtomicSafetyHandle : public ValueType // 0x0
	{
	public:
		__int64 versionNode; // 0x10 (size: 0x8, flags: 0x3, type: 0x18)
		UnityEngine::AtomicSafetyHandleVersionMask version; // 0x18 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x20
}
