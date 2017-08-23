#pragma once

#include "..\System\Globalization\NumberFormatInfo.h"
#include "..\System\Text\StringBuilder.h"

namespace rust 
{
	class DigitItem : public FormatItem // 0x18
	{
	public:
		System::Globalization::NumberFormatInfo* nfi; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* numberBuilder; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int decimalSectionLength; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
