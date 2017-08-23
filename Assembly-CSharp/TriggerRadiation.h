#pragma once

namespace rust 
{
	class TriggerRadiation : public TriggerBase // 0x30
	{
	public:
		RadiationTier radiationTier; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		float RadiationAmountOverride; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float radiationSize; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float falloff; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
