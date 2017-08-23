#pragma once

#include "..\UnityEngine\UI\InputField.h"
#include "Item.h"

namespace rust 
{
	class NotePanel : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::InputField* input; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Item* item; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
