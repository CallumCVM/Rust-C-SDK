#pragma once

#include "IronsightAimPoint.h"

namespace rust 
{
	class HolosightReticlePositioning : public MonoBehaviour // 0x18
	{
	public:
		IronsightAimPoint* aimPoint; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
