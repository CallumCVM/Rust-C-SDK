#pragma once

#include "..\ResourceDispenser\GatherPropertyEntry.h"

namespace rust 
{
	class GatherProperties : public Object // 0x0
	{
	public:
		ResourceDispenser::GatherPropertyEntry* Tree; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		ResourceDispenser::GatherPropertyEntry* Ore; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		ResourceDispenser::GatherPropertyEntry* Flesh; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
