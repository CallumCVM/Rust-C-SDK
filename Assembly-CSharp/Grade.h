#pragma once

#include "BuildingGrade.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class Grade : public Object // 0x0
	{
	public:
		BuildingGrade* grade; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<ItemAmount>* costToBuild; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		float maxHealth; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
