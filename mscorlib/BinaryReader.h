#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\Text\Encoding.h"
#include "..\System\Text\Decoder.h"
#include "..\System\Char.h"

namespace System
{
	namespace IO
{
	class BinaryReader : public Object // 0x0
	{
	public:
		System::IO::Stream* m_stream; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* m_encoding; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* m_buffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::Decoder* decoder; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Char* charBuffer; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		bool m_disposed; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
