#pragma once

#include "..\System\Exception.h"
#include "..\UnityEngine\List.h"
#include "..\System\Object.h"
#include "..\System\Threading\AutoResetEvent.h"
#include "..\System\IO\Stream.h"
#include "..\Ionic\BZip2\BitWriter.h"
#include "..\Ionic\BZip2\ParallelBZip2OutputStream\TraceBits.h"

namespace Ionic
{
	namespace BZip2
{
	class ParallelBZip2OutputStream : public Stream // 0x18
	{
	public:
		System::Exception* pendingException; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Queue<int> toWrite; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Queue<int> toFill; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<Ionic.BZip2.WorkItem>* pool; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object latestLock; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object eLock; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object outputLock; // 0x48 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::AutoResetEvent* newlyCompressedBlob; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* output; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::BZip2::BitWriter* bw; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		int _maxWorkers; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		bool firstWriteDone; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
		int lastFilled; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		int lastWritten; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		int latestCompressed; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		int currentlyFilling; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
		bool handlingException; // 0x80 (size: 0x1, flags: 0x1, type: 0x2)
		bool emitting; // 0x81 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 totalBytesWrittenIn; // 0x88 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 totalBytesWrittenOut; // 0x90 (size: 0x8, flags: 0x1, type: 0xa)
		bool leaveOpen; // 0x98 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int combinedCRC; // 0x9c (size: 0x4, flags: 0x1, type: 0x9)
		int blockSize100k; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
		Ionic::BZip2::ParallelBZip2OutputStream::TraceBits desiredTrace; // 0xa4 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xa8
}
