#pragma once

#include "..\System\Char.h"
#include "..\System\Text\Encoding.h"
#include "..\System\Text\Decoder.h"
#include "..\System\IO\Stream.h"
#include "..\System\Text\StringBuilder.h"

namespace System
{
	namespace Xml
{
	class NonBlockingStreamReader : public TextReader // 0x18
	{
	public:
		unsigned char* input_buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Char* decoded_buffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::Encoding* encoding; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Decoder* decoder; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* base_stream; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* line_builder; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		int decoded_count; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		int pos; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
		int buffer_size; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		bool mayBlock; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
		bool foundCR; // 0x55 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
