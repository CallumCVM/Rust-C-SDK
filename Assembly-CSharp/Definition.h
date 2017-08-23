#pragma once

#include "..\Rust\AmmoTypes.h"

namespace rust 
{
	class Definition : public ValueType // 0x0
	{
	public:
		int builtInSize; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		Rust::AmmoTypes ammoTypes; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
