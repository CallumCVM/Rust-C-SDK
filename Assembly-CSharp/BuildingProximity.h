#pragma once

#include "..\UnityEngine\Bounds.h"

namespace rust 
{
	class BuildingProximity : public PrefabAttribute // 0x98
	{
	public:
		float distance; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Bounds bounds; // 0x9c (size: 0x18, flags: 0x1, type: 0x11)
	}; // size = 0xb8
}
