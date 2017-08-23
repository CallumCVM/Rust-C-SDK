#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class SurveyCharge : public TimedExplosive // 0x168
	{
	public:
		GameObjectRef* craterPrefab; // 0x168 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* craterPrefab_Oil; // 0x170 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x178
}
