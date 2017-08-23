#pragma once

#include "..\UnityEngine\UI\InputField.h"
#include "SleepingBag.h"

namespace rust 
{
	class RenameSleepingBag : public UIDialog // 0x20
	{
	public:
		UnityEngine::UI::InputField* input; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		SleepingBag* bag; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
