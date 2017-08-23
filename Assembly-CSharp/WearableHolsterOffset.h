#pragma once

#include "..\WearableHolsterOffset\offsetInfo.h"

namespace rust 
{
	class WearableHolsterOffset : public MonoBehaviour // 0x18
	{
	public:
		WearableHolsterOffset::offsetInfo* Offsets; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
