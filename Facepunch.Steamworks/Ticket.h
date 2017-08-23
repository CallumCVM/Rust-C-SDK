#pragma once

#include "..\Facepunch\Steamworks\Client.h"

namespace rust 
{
	class Ticket : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		unsigned char* Data; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned int Handle; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
