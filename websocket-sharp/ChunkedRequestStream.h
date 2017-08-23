#pragma once

#include "..\WebSocketSharp\Net\HttpListenerContext.h"
#include "..\WebSocketSharp\Net\ChunkStream.h"

namespace WebSocketSharp
{
	namespace Net
{
	class ChunkedRequestStream : public RequestStream // 0x40
	{
	public:
		WebSocketSharp::Net::HttpListenerContext* _context; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::ChunkStream* _decoder; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool _disposed; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		bool _noMoreData; // 0x51 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
