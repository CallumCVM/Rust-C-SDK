#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\System\Action.h"

namespace rust 
{
	class IconSkinPicker : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* pickerIcon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* container; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action* skinChangedEvent; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
