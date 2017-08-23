#pragma once

#include "BasePlayer.h"

namespace rust 
{
	class PlayerBelt : public Object // 0x0
	{
	public:
		BasePlayer* player; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x18
}
