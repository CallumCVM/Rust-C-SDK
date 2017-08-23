#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class Locker : public StorageContainer // 0x2e8
	{
	public:
		GameObjectRef* equipSound; // 0x2e8 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x2f0
}
