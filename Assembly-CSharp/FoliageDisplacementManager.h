#pragma once

#include "SpecialPurposeCamera.h"

namespace rust 
{
	class FoliageDisplacementManager : public SingletonComponent`1 // 0x18
	{
	public:
		SpecialPurposeCamera* handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
