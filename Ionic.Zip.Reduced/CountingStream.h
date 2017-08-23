#pragma once

#include "..\System\IO\Stream.h"

namespace Ionic
{
	namespace Zip
{
	class CountingStream : public Stream // 0x18
	{
	public:
		System::IO::Stream* _s; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 _bytesWritten; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 _bytesRead; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 _initialOffset; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x38
}
