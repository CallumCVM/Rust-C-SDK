#pragma once

#include "OccludeeState.h"
#include "..\OcclusionCulling\Sphere.h"

namespace rust 
{
	class OccludeeSphere : public ValueType // 0x0
	{
	public:
		int id; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		OccludeeState* state; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		OcclusionCulling::Sphere sphere; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
