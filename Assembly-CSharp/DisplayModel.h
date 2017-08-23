#pragma once

#include "..\UnityEngine\GameObject.h"
#include "ItemDefinition.h"

namespace rust 
{
	class DisplayModel : public Object // 0x0
	{
	public:
		UnityEngine::GameObject* displayModel; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* def; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int slot; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
