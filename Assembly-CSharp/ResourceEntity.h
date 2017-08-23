#pragma once

#include "ProtectionProperties.h"

namespace rust 
{
	class ResourceEntity : public BaseEntity // 0x130
	{
	public:
		ProtectionProperties* baseProtection; // 0x130 (size: 0x8, flags: 0x6, type: 0x12)
		float startHealth; // 0x138 (size: 0x4, flags: 0x6, type: 0xc)
		float health; // 0x13c (size: 0x4, flags: 0x4, type: 0xc)
	}; // size = 0x140
}
