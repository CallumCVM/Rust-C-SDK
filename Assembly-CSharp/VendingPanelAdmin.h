#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\InputField.h"
#include "VendingMachine.h"

namespace rust 
{
	class VendingPanelAdmin : public UIDialog // 0x20
	{
	public:
		UnityEngine::GameObject* sellOrderAdminContainer; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* sellOrderAdminPrefab; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* storeNameInputField; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		VendingMachine* vendingMachine; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
