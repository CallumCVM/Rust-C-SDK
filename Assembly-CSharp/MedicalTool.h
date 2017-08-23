#pragma once

#include "BasePlayer.h"

namespace rust 
{
	class MedicalTool : public AttackEntity // 0x1e0
	{
	public:
		BasePlayer* useTarget; // 0x1e0 (size: 0x8, flags: 0x81, type: 0x12)
		float healDurationSelf; // 0x1e8 (size: 0x4, flags: 0x6, type: 0xc)
		float healDurationOther; // 0x1ec (size: 0x4, flags: 0x6, type: 0xc)
		float maxDistanceOther; // 0x1f0 (size: 0x4, flags: 0x6, type: 0xc)
		bool canUseOnOther; // 0x1f4 (size: 0x1, flags: 0x6, type: 0x2)
		bool canRevive; // 0x1f5 (size: 0x1, flags: 0x6, type: 0x2)
		float resetTime; // 0x1f8 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x200
}
