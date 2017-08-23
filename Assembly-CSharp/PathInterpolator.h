#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class PathInterpolator : public Object // 0x0
	{
	public:
		UnityEngine::Vector3* Points; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3* Tangents; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		int <MinIndex>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int <MaxIndex>k__BackingField; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		float <Length>k__BackingField; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		float <StepSize>k__BackingField; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		bool initialized; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
