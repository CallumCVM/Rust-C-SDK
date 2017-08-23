#pragma once

namespace rust 
{
	class DeployableDecay : public Decay // 0x98
	{
	public:
		float decayDelay; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		float decayDuration; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xa0
}
