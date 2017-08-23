#pragma once

#include "..\System\Text\DecoderFallback.h"
#include "..\System\Text\DecoderFallbackBuffer.h"

namespace System
{
	namespace Text
{
	class Decoder : public Object // 0x0
	{
	public:
		System::Text::DecoderFallback* fallback; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::DecoderFallbackBuffer* fallback_buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
