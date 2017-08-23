#pragma once

#include "..\System\Text\EncoderFallback.h"
#include "..\System\Text\EncoderFallbackBuffer.h"

namespace System
{
	namespace Text
{
	class Encoder : public Object // 0x0
	{
	public:
		System::Text::EncoderFallback* fallback; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::EncoderFallbackBuffer* fallback_buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
