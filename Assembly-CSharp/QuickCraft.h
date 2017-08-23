#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class QuickCraft : public MonoBehaviour // 0x18
	{
	public:
		GameObjectRef* craftButton; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* empty; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		bool isDirty; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		int lastHash; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
