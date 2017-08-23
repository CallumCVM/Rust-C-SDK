#pragma once

#include "ConnectionAuth.h"

namespace rust 
{
	class ServerMgr : public SingletonComponent`1 // 0x18
	{
	public:
		ConnectionAuth* auth; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool runFrameUpdate; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
