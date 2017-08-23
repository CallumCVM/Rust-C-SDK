#pragma once

#include "..\WebSocketSharp\Net\HttpStreamAsyncResult.h"

namespace WebSocketSharp
{
	namespace Net
{
	class ReadBufferState : public Object // 0x0
	{
	public:
		WebSocketSharp::Net::HttpStreamAsyncResult* _asyncResult; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* _buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int _count; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int _initialCount; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int _offset; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
