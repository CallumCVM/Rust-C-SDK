#pragma once

#include "BasePlayer.h"
#include "GameObjectRef.h"

namespace rust 
{
	class ShopFront : public StorageContainer // 0x2e8
	{
	public:
		BasePlayer* vendorPlayer; // 0x2e8 (size: 0x8, flags: 0x6, type: 0x12)
		BasePlayer* customerPlayer; // 0x2f0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* transactionCompleteEffect; // 0x2f8 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x300
}
