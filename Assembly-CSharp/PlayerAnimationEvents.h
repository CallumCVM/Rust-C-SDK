#pragma once

#include "BasePlayer.h"

namespace rust 
{
	class PlayerAnimationEvents : public MonoBehaviour // 0x18
	{
	public:
		BasePlayer* player; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
