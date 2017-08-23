#pragma once

#include "..\Rust\DamageType.h"

namespace Rust
{
	class DamageTypeEntry : public Object // 0x0
	{
	public:
		Rust::DamageType type; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		float amount; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
