#pragma once

#include "..\System\Char.h"

namespace System
{
	namespace Text
{
	class EncoderFallbackException : public ArgumentException // 0x68
	{
	public:
		System::Char char_unknown; // 0x68 (size: 0x2, flags: 0x1, type: 0x3)
		System::Char char_unknown_high; // 0x6a (size: 0x2, flags: 0x1, type: 0x3)
		System::Char char_unknown_low; // 0x6c (size: 0x2, flags: 0x1, type: 0x3)
		int index; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x78
}
