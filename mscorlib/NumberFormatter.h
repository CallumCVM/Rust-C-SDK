#pragma once

#include "..\System\Threading\Thread.h"
#include "..\System\Globalization\NumberFormatInfo.h"
#include "..\System\Char.h"

namespace System
{
	class NumberFormatter : public Object // 0x0
	{
	public:
		System::Threading::Thread* _thread; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Globalization::NumberFormatInfo* _nfi; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool _NaN; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool _infinity; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
		bool _isCustomFormat; // 0x22 (size: 0x1, flags: 0x1, type: 0x2)
		bool _specifierIsUpper; // 0x23 (size: 0x1, flags: 0x1, type: 0x2)
		bool _positive; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
		System::Char _specifier; // 0x26 (size: 0x2, flags: 0x1, type: 0x3)
		int _precision; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int _defPrecision; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int _digitsLen; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int _offset; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int _decPointPos; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned int _val1; // 0x3c (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int _val2; // 0x40 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int _val3; // 0x44 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int _val4; // 0x48 (size: 0x4, flags: 0x1, type: 0x9)
		System::Char* _cbuf; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		int _ind; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x60
}
