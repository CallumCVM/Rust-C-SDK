#pragma once

#include "..\System\IO\Stream.h"

namespace WebSocketSharp
{
	namespace Net
{
	class RequestStream : public Stream // 0x18
	{
	public:
		unsigned char* _buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::IO::Stream* _stream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 _bodyLeft; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		int _count; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		bool _disposed; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
		int _offset; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
