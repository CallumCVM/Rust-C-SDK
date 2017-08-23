#pragma once

#include "..\Apex\AI\IUtilityAI.h"
#include "..\Apex\AI\Serialization\AIStorage.h"

namespace rust 
{
	class AIData : public Object // 0x0
	{
	public:
		Apex::AI::IUtilityAI* ai; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Apex::AI::Serialization::AIStorage* storedData; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
