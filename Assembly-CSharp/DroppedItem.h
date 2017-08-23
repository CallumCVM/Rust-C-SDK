#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class DroppedItem : public WorldItem // 0x140
	{
	public:
		UnityEngine::GameObject* itemModel; // 0x140 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x148
}
