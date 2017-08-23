#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\GameObject.h"
#include "GameManager.h"
#include "..\PrefabAttribute\Library.h"

namespace rust 
{
	class Prefab : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::GameObject* Object; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		GameManager* Manager; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		PrefabAttribute::Library* Attribute; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned int ID; // 0x30 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x38
}
