#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\ScrollRect.h"
#include "..\UnityEngine\UI\InputField.h"
#include "..\Facepunch\GameObjectPool<BlueprintButton>.h"
#include "ItemCategory.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class UIBlueprints : public ListComponent`1 // 0x18
	{
	public:
		UnityEngine::GameObject* buttonPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::ScrollRect* scrollRect; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* searchField; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* listAvailable; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* listLocked; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::GameObjectPool<BlueprintButton> blueprintButtonPool; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<BlueprintButton>* buttons; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		bool needsResort; // 0x50 (size: 0x1, flags: 0x86, type: 0x2)
		ItemCategory category; // 0x54 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
