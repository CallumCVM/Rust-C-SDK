#pragma once

#include "BaseNetworkable.h"

namespace rust 
{
	class EntityInfo : public ValueType // 0x0
	{
	public:
		BaseNetworkable* entity; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned int entityID; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int parentID; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int groupID; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
