#pragma once

#include "T.h"

namespace rust 
{
template <typename T0>
	class EntityComponent : public EntityComponentBase // 0x18
	{
	public:
		T _baseEntity; // 0x18 (size: 0x8, flags: 0x81, type: 0x13)
	}; // size = 0x20
}
