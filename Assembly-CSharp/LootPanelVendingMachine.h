#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class LootPanelVendingMachine : public LootPanel // 0x20
	{
	public:
		UnityEngine::GameObject* sellOrderPrefab; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* sellOrderContainer; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* busyOverlayPrefab; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* busyOverlayInstance; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
