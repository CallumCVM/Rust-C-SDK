#pragma once

#include "..\System\Net\HttpStreamAsyncResult.h"

namespace rust 
{
	class ReadBufferState : public Object // 0x0
	{
	public:
		unsigned char* Buffer; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Net::HttpStreamAsyncResult* Ares; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int Offset; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int Count; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		int InitialCount; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
