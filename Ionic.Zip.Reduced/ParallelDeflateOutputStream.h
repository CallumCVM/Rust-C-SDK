#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\IO\Stream.h"
#include "..\System\Threading\AutoResetEvent.h"
#include "..\System\Object.h"
#include "..\Ionic\Crc\CRC32.h"
#include "..\Ionic\Zlib\CompressionLevel.h"
#include "..\System\Exception.h"
#include "..\Ionic\Zlib\ParallelDeflateOutputStream\TraceBits.h"
#include "..\Ionic\Zlib\CompressionStrategy.h"

namespace Ionic
{
	namespace Zlib
{
	class ParallelDeflateOutputStream : public Stream // 0x18
	{
	public:
		UnityEngine::List<Ionic.Zlib.WorkItem>* _pool; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::IO::Stream* _outStream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::AutoResetEvent* _newlyCompressedBlob; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _outputLock; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		Ionic::Crc::CRC32* _runningCrc; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _latestLock; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		System.Collections.Generic.Queue<int> _toWrite; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Queue<int> _toFill; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		System::Exception* _pendingException; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _eLock; // 0x60 (size: 0x8, flags: 0x1, type: 0x1c)
		bool _leaveOpen; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool emitting; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
		int _maxBufferPairs; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		int _bufferSize; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		bool _isClosed; // 0x74 (size: 0x1, flags: 0x1, type: 0x2)
		bool _firstWriteDone; // 0x75 (size: 0x1, flags: 0x1, type: 0x2)
		int _currentlyFilling; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		int _lastFilled; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
		int _lastWritten; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
		int _latestCompressed; // 0x84 (size: 0x4, flags: 0x1, type: 0x8)
		int _Crc32; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 _totalBytesProcessed; // 0x90 (size: 0x8, flags: 0x1, type: 0xa)
		Ionic::Zlib::CompressionLevel _compressLevel; // 0x98 (size: 0x4, flags: 0x1, type: 0x11)
		bool _handlingException; // 0x9c (size: 0x1, flags: 0x1, type: 0x2)
		Ionic::Zlib::ParallelDeflateOutputStream::TraceBits _DesiredTrace; // 0xa0 (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::Zlib::CompressionStrategy <Strategy>k__BackingField; // 0xa4 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xa8
}
