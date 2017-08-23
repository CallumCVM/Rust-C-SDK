#pragma once

#include "..\System\IO\Stream.h"
#include "..\Ionic\Crc\CRC32.h"

namespace Ionic
{
	namespace Crc
{
	class CrcCalculatorStream : public Stream // 0x18
	{
	public:
		System::IO::Stream* _innerStream; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		Ionic::Crc::CRC32* _Crc32; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 _lengthLimit; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		bool _leaveOpen; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
