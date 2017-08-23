#pragma once

#include "..\System\Int16.h"
#include "..\System\UInt16.h"

namespace System
{
	namespace IO
{
	class kevent : public ValueType // 0x0
	{
	public:
		int ident; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		System::Int16 filter; // 0x14 (size: 0x2, flags: 0x6, type: 0x6)
		System::UInt16 flags; // 0x16 (size: 0x2, flags: 0x6, type: 0x7)
		unsigned int fflags; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		int data; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		__int64 udata; // 0x20 (size: 0x8, flags: 0x6, type: 0x18)
	}; // size = 0x28
}
