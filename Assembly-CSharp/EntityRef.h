#pragma once

#include "BaseEntity.h"

namespace rust 
{
	class EntityRef : public ValueType // 0x0
	{
	public:
		BaseEntity* ent_cached; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		unsigned int id_cached; // 0x18 (size: 0x4, flags: 0x3, type: 0x9)
	}; // size = 0x20
}
