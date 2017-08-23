#pragma once

#include "..\Network\Stats\Node.h"

namespace Network
{
	class Stats : public Object // 0x0
	{
	public:
		Network::Stats::Node* Building; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Stats::Node* Previous; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool Enabled; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
