#pragma once

#include "..\PlayerInventory\Type.h"

namespace rust 
{
	class ContainerSourceLocalPlayer : public ItemContainerSource // 0x18
	{
	public:
		PlayerInventory::Type type; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
