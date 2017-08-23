#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class ItemModConsumeContents : public ItemMod // 0x20
	{
	public:
		GameObjectRef* consumeEffect; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
