#pragma once

#include "DamageProperties.h"
#include "..\DamageProperties\HitAreaProperty.h"

namespace rust 
{
	class DamageProperties : public ScriptableObject // 0x18
	{
	public:
		DamageProperties* fallback; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		DamageProperties::HitAreaProperty* bones; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
