#pragma once

#include "TransformInterpolator.h"
#include "BaseEntity.h"
#include "..\TransformInterpolator\Entry.h"

namespace rust 
{
	class PositionLerp : public ListComponent`1 // 0x18
	{
	public:
		TransformInterpolator* interpolator; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		BaseEntity* srcEntity; // 0x20 (size: 0x8, flags: 0x86, type: 0x12)
		float lastUpdate; // 0x28 (size: 0x4, flags: 0x86, type: 0xc)
		float smoothedSpacing; // 0x2c (size: 0x4, flags: 0x86, type: 0xc)
		TransformInterpolator::Entry lastLerp; // 0x30 (size: 0x24, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
