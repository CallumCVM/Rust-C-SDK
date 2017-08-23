#pragma once

#include "..\UnityEngine\UI\InputField.h"
#include "..\System\Action.h"

namespace rust 
{
	class UIIntegerEntry : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::InputField* textEntry; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action* textChanged; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
