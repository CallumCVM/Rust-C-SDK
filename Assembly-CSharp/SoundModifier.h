#pragma once

#include "Sound.h"

namespace rust 
{
	class SoundModifier : public MonoBehaviour // 0x18
	{
	public:
		Sound* sound; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
