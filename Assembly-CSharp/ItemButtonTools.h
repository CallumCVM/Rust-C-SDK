#pragma once

#include "..\UnityEngine\UI\Image.h"
#include "ItemDefinition.h"

namespace rust 
{
	class ItemButtonTools : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Image* image; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* itemDef; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
