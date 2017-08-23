#pragma once

#include "..\Ionic\Zlib\ZlibCodec.h"

namespace Ionic
{
	namespace Zlib
{
	class WorkItem : public Object // 0x0
	{
	public:
		unsigned char* buffer; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* compressed; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		Ionic::Zlib::ZlibCodec* compressor; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		int crc; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int index; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		int ordinal; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int inputBytesAvailable; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		int compressedBytesAvailable; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
