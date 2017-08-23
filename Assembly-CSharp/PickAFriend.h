#pragma once

#include "..\UnityEngine\UI\InputField.h"

namespace rust 
{
	class PickAFriend : public UIDialog // 0x20
	{
	public:
		UnityEngine::UI::InputField* input; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System.Action<unsigned __int64> onSelected; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x30
}
