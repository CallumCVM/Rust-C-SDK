#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class LootPanelContainer : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* NoLootPanel; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* currentLootPanel; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::UnicodeString* _lastLootPanel; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool wasShowingPanel; // 0x30 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x38
}
