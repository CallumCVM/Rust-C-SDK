#pragma once

#include "..\System\IO\Stream.h"

namespace Ionic
{
	namespace BZip2
{
	class BitWriter : public Object // 0x0
	{
	public:
		System::IO::Stream* output; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned int accumulator; // 0x18 (size: 0x4, flags: 0x1, type: 0x9)
		int nAccumulatedBits; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int totalBytesWrittenOut; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
