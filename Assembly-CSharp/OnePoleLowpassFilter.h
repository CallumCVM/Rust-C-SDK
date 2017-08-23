#pragma once

#include "..\OnePoleLowpassFilter\ChannelData.h"

namespace rust 
{
	class OnePoleLowpassFilter : public MonoBehaviour // 0x18
	{
	public:
		OnePoleLowpassFilter::ChannelData* channelData; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		float frequency; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		int sampleRate; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		float c; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		float a1; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float b1; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		float prevFrequency; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
