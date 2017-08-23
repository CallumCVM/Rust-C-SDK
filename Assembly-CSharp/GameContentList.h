#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class GameContentList : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<UnityEngine.Object>* foundObjects; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		ResourceType resourceType; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
