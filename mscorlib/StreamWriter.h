#pragma once

#include "..\System\Text\Encoding.h"
#include "..\System\IO\Stream.h"
#include "..\System\Char.h"

namespace System
{
	namespace IO
{
	class StreamWriter : public TextWriter // 0x28
	{
	public:
		System::Text::Encoding* internalEncoding; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* internalStream; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool iflush; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* byte_buf; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		int byte_pos; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		System::Char* decode_buf; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		int decode_pos; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		bool DisposedAlready; // 0x5c (size: 0x1, flags: 0x1, type: 0x2)
		bool preamble_done; // 0x5d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
