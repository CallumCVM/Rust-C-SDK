#pragma once

#include "..\System\IO\Stream.h"

namespace System
{
	namespace IO
{
	class BufferedStream : public Stream // 0x18
	{
	public:
		System::IO::Stream* m_stream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* m_buffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		int m_buffer_pos; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int m_buffer_read_ahead; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		bool m_buffer_reading; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
