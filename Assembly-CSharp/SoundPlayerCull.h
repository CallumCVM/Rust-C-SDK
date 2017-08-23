#pragma once

#include "SoundPlayer.h"
#include "LODCell.h"

namespace rust 
{
	class SoundPlayerCull : public MonoBehaviour // 0x18
	{
	public:
		SoundPlayer* soundPlayer; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		LODCell* cell; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		float cullDistance; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
