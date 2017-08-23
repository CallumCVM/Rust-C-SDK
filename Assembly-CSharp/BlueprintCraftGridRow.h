#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class BlueprintCraftGridRow : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* amount; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* itemName; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* total; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* have; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color colorOK; // 0x38 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color colorBad; // 0x48 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x58
}
