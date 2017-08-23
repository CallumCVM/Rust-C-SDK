#pragma once

#include "..\SoundModulation\Modulator.h"

namespace rust 
{
	class InstrumentEffect : public SoundPlayer // 0x40
	{
	public:
		SoundModulation::Modulator* pitchMod; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		float pitch; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x50
}
