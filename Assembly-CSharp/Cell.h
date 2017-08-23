#pragma once

#include "..\UnityEngine\Bounds.h"
#include "..\UnityEngine\Vector4.h"
#include "..\OcclusionCulling\SmartList<OccludeeState>.h"

namespace rust 
{
	class Cell : public HashedPoolValue // 0x20
	{
	public:
		OcclusionCulling::SmartList<OccludeeState> bucket; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		int x; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int y; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		int z; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Bounds bounds; // 0x34 (size: 0x18, flags: 0x6, type: 0x11)
		UnityEngine::Vector4 sphereBounds; // 0x4c (size: 0x10, flags: 0x6, type: 0x11)
		bool isVisible; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x60
}
