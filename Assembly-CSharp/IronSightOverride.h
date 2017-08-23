#pragma once

#include "IronsightAimPoint.h"

namespace rust 
{
	class IronSightOverride : public MonoBehaviour // 0x18
	{
	public:
		IronsightAimPoint* aimPoint; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float fieldOfViewOffset; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float fovBias; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
