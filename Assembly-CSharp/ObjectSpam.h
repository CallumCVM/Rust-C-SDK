#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class ObjectSpam : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* source; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int amount; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		float radius; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
