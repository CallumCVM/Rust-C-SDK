#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class LootPanelLocker : public LootPanel // 0x20
	{
	public:
		UnityEngine::GameObject* controls; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
