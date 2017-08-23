#pragma once

#include "..\System\IO\Stream.h"

namespace System
{
	namespace Resources
{
	class Win32IconFileReader : public Object // 0x0
	{
	public:
		System::IO::Stream* iconFile; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
