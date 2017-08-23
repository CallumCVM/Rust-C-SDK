#pragma once

#include "..\System\Net\ChunkStream.h"
#include "..\System\Net\HttpListenerContext.h"

namespace System
{
	namespace Net
{
	class ChunkedInputStream : public RequestStream // 0x40
	{
	public:
		System::Net::ChunkStream* decoder; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::HttpListenerContext* context; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool disposed; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		bool no_more_data; // 0x51 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
