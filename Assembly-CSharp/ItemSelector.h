#pragma once

#include "ItemCategory.h"

namespace rust 
{
	class ItemSelector : public PropertyAttribute // 0x18
	{
	public:
		ItemCategory category; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
