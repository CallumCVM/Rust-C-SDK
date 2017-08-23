#pragma once

#include "..\Ionic\Zlib\ZlibCodec.h"
#include "..\Ionic\Zlib\ZlibBaseStream\StreamMode.h"
#include "..\Ionic\Zlib\FlushType.h"
#include "..\Ionic\Zlib\ZlibStreamFlavor.h"
#include "..\Ionic\Zlib\CompressionMode.h"
#include "..\Ionic\Zlib\CompressionLevel.h"
#include "..\System\IO\Stream.h"
#include "..\Ionic\Zlib\CompressionStrategy.h"
#include "..\Ionic\Crc\CRC32.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"

namespace Ionic
{
	namespace Zlib
{
	class ZlibBaseStream : public Stream // 0x18
	{
	public:
		Ionic::Zlib::ZlibCodec* _z; // 0x18 (size: 0x8, flags: 0x5, type: 0x12)
		unsigned char* _workingBuffer; // 0x20 (size: 0x8, flags: 0x5, type: 0x1d)
		unsigned char* _buf1; // 0x28 (size: 0x8, flags: 0x5, type: 0x1d)
		System::IO::Stream* _stream; // 0x30 (size: 0x8, flags: 0x5, type: 0x12)
		Ionic::Crc::CRC32* crc; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _GzipFileName; // 0x40 (size: 0x8, flags: 0x5, type: 0xe)
		UnityEngine::UnicodeString* _GzipComment; // 0x48 (size: 0x8, flags: 0x5, type: 0xe)
		Ionic::Zlib::ZlibBaseStream::StreamMode _streamMode; // 0x50 (size: 0x4, flags: 0x5, type: 0x11)
		Ionic::Zlib::FlushType _flushMode; // 0x54 (size: 0x4, flags: 0x5, type: 0x11)
		Ionic::Zlib::ZlibStreamFlavor _flavor; // 0x58 (size: 0x4, flags: 0x5, type: 0x11)
		Ionic::Zlib::CompressionMode _compressionMode; // 0x5c (size: 0x4, flags: 0x5, type: 0x11)
		Ionic::Zlib::CompressionLevel _level; // 0x60 (size: 0x4, flags: 0x5, type: 0x11)
		bool _leaveOpen; // 0x64 (size: 0x1, flags: 0x5, type: 0x2)
		int _bufferSize; // 0x68 (size: 0x4, flags: 0x5, type: 0x8)
		Ionic::Zlib::CompressionStrategy Strategy; // 0x6c (size: 0x4, flags: 0x5, type: 0x11)
		System::DateTime _GzipMtime; // 0x70 (size: 0x10, flags: 0x5, type: 0x11)
		int _gzipHeaderByteCount; // 0x80 (size: 0x4, flags: 0x5, type: 0x8)
		bool nomoreinput; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x88
}
