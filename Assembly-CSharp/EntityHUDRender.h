#pragma once

#include "BaseEntity.h"

namespace rust 
{
	class EntityHUDRender : public MonoBehaviour // 0x18
	{
	public:
		BaseEntity* cachedEntity; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x20
}
