#pragma once

#include "..\Rust\DamageType.h"

namespace rust 
{
	class TriggerHurt : public TriggerBase // 0x30
	{
	public:
		float DamagePerSecond; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float DamageTickRate; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		Rust::DamageType damageType; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
