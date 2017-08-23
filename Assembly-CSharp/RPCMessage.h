#pragma once

#include "..\Network\Connection.h"
#include "BasePlayer.h"
#include "..\Network\Read.h"

namespace rust 
{
	class RPCMessage : public ValueType // 0x0
	{
	public:
		Network::Connection* connection; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		BasePlayer* player; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Read* read; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
