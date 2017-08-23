#pragma once

#include "..\SoundModulation\Parameter.h"

namespace rust 
{
	class Modulator : public Object // 0x0
	{
	public:
		SoundModulation::Parameter param; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		float value; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
