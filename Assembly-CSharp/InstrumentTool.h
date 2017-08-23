#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class InstrumentTool : public HeldEntity // 0x180
	{
	public:
		GameObjectRef* soundEffect; // 0x180 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x188
}
