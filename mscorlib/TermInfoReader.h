#pragma once

#include "..\System\Int16.h"

namespace System
{
	class TermInfoReader : public Object // 0x0
	{
	public:
		System::Int16 boolSize; // 0x10 (size: 0x2, flags: 0x1, type: 0x6)
		System::Int16 numSize; // 0x12 (size: 0x2, flags: 0x1, type: 0x6)
		System::Int16 strOffsets; // 0x14 (size: 0x2, flags: 0x1, type: 0x6)
		unsigned char* buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int booleansOffset; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
