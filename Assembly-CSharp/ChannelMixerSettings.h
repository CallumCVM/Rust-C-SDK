#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class ChannelMixerSettings : public ValueType // 0x0
	{
	public:
		int currentChannel; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Vector3* channels; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
