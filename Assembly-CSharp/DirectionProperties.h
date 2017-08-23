#pragma once

#include "..\UnityEngine\Bounds.h"
#include "ProtectionProperties.h"

namespace rust 
{
	class DirectionProperties : public PrefabAttribute // 0x98
	{
	public:
		ProtectionProperties* extraProtection; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Bounds bounds; // 0xa0 (size: 0x18, flags: 0x6, type: 0x11)
	}; // size = 0xb8
}
