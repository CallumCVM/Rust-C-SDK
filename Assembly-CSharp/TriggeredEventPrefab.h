#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class TriggeredEventPrefab : public TriggeredEvent // 0x18
	{
	public:
		GameObjectRef* targetPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
