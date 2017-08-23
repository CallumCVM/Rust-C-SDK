#pragma once

#include "..\OcclusionCulling\Cell.h"
#include "..\OcclusionCulling\BufferSet.h"
#include "..\UnityEngine\Vector4.h"
#include "..\OcclusionCulling\OnVisibilityChanged.h"

namespace rust 
{
	class OccludeeState : public SmartListValue // 0x18
	{
	public:
		OcclusionCulling::Cell* cell; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		OcclusionCulling::BufferSet* set; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		OcclusionCulling::OnVisibilityChanged* onVisibilityChanged; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		int slot; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Vector4 sphereBounds; // 0x34 (size: 0x10, flags: 0x6, type: 0x11)
		bool isVisible; // 0x44 (size: 0x1, flags: 0x6, type: 0x2)
		float minTimeVisible; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float timeVisible; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x50
}
