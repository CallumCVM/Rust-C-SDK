#pragma once

#include "..\Ionic\BZip2\BZip2Compressor.h"
#include "..\System\IO\Stream.h"
#include "..\Ionic\BZip2\BitWriter.h"
#include "..\Ionic\BZip2\BZip2OutputStream\TraceBits.h"

namespace Ionic
{
	namespace BZip2
{
	class BZip2OutputStream : public Stream // 0x18
	{
	public:
		Ionic::BZip2::BZip2Compressor* compressor; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* output; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::BZip2::BitWriter* bw; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int totalBytesWrittenIn; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		bool leaveOpen; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int combinedCRC; // 0x38 (size: 0x4, flags: 0x1, type: 0x9)
		int blockSize100k; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		Ionic::BZip2::BZip2OutputStream::TraceBits desiredTrace; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
