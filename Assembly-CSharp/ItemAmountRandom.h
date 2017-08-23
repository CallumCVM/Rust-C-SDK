#pragma once

#include "ItemDefinition.h"
#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class ItemAmountRandom : public Object // 0x0
	{
	public:
		ItemDefinition* itemDef; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* amount; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
