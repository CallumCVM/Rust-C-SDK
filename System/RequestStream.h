#pragma once

#include "..\System\IO\Stream.h"

namespace System
{
	namespace Net
{
	class RequestStream : public Stream // 0x18
	{
	public:
		unsigned char* buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::IO::Stream* stream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int offset; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int length; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		__int64 remaining_body; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
		bool disposed; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
