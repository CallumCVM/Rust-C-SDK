#pragma once

#include "MetabolismAttribute.h"

namespace rust 
{
	class PlayerMetabolism : public BaseMetabolism`1 // 0x40
	{
	public:
		MetabolismAttribute* temperature; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* poison; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* radiation_level; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* radiation_poison; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* wetness; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* dirtyness; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* oxygen; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* bleeding; // 0x78 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* comfort; // 0x80 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* pending_health; // 0x88 (size: 0x8, flags: 0x6, type: 0x12)
		bool isDirty; // 0x90 (size: 0x1, flags: 0x6, type: 0x2)
		float lastConsumeTime; // 0x94 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x98
}
