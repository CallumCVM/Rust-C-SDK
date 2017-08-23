#pragma once

#include "SoundPlayer.h"

namespace rust 
{
	class SoundRepeater : public MonoBehaviour // 0x18
	{
	public:
		SoundPlayer* player; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float interval; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
