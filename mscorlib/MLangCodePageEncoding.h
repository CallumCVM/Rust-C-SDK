#pragma once

#include "..\System\Text\EncoderFallback.h"
#include "..\System\Text\DecoderFallback.h"
#include "..\System\Text\Encoding.h"

namespace System
{
	namespace Text
{
	class MLangCodePageEncoding : public Object // 0x0
	{
	public:
		int codePage; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		bool isReadOnly; // 0x14 (size: 0x1, flags: 0x1, type: 0x2)
		System::Text::EncoderFallback* encoderFallback; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::DecoderFallback* decoderFallback; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* realObject; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
