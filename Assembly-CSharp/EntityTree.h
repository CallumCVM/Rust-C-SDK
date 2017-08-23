#pragma once

#include "..\Spatial\Grid<BaseEntity>.h"

namespace rust 
{
	class EntityTree : public Object // 0x0
	{
	public:
		Spatial::Grid<BaseEntity> Grid; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
