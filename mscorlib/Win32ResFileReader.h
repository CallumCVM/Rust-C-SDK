#pragma once

#include "..\System\IO\Stream.h"

namespace System
{
	namespace Resources
{
	class Win32ResFileReader : public Object // 0x0
	{
	public:
		System::IO::Stream* res_file; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
