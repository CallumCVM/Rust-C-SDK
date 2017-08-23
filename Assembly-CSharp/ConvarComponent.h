#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class ConvarComponent : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<ConvarComponent.ConvarEvent>* list; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		bool runOnServer; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool runOnClient; // 0x21 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
