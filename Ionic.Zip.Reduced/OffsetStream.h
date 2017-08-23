#pragma once

#include "..\System\IO\Stream.h"

namespace Ionic
{
	namespace Zip
{
	class OffsetStream : public Stream // 0x18
	{
	public:
		System::IO::Stream* _innerStream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 _originalPosition; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x28
}
