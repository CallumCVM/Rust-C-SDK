#pragma once

#include "..\Facepunch\Rcon\Listener.h"

namespace rust 
{
	class RConBehaviour : public WebSocketBehavior // 0x60
	{
	public:
		Facepunch::Rcon::Listener* Parent; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x68
}
