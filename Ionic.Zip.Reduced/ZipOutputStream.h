#pragma once

#include "..\Ionic\Zip\EncryptionAlgorithm.h"
#include "..\Ionic\Zip\ZipEntryTimestamp.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\Stream.h"
#include "..\Ionic\Zip\ZipEntry.h"
#include "..\Ionic\Zip\Zip64Option.h"
#include "..\Ionic\Zip\ZipOption.h"
#include "..\System\Text\Encoding.h"
#include "..\Ionic\Zip\CountingStream.h"
#include "..\Ionic\Crc\CrcCalculatorStream.h"
#include "..\Ionic\Zlib\ParallelDeflateOutputStream.h"
#include "..\Ionic\Zlib\CompressionStrategy.h"
#include "..\Ionic\Zlib\CompressionLevel.h"
#include "..\Ionic\Zip\CompressionMethod.h"

namespace Ionic
{
	namespace Zip
{
	class ZipOutputStream : public Stream // 0x18
	{
	public:
		UnityEngine::UnicodeString* _password; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* _comment; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::Stream* _outputStream; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::ZipEntry* _currentEntry; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,Ionic.Zip.ZipEntry> _entriesWritten; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		System::Text::Encoding* _alternateEncoding; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::CountingStream* _outputCounter; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _encryptor; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _deflater; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Crc::CrcCalculatorStream* _entryOutputStream; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _name; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		Ionic::Zlib::ParallelDeflateOutputStream* ParallelDeflater; // 0x70 (size: 0x8, flags: 0x3, type: 0x12)
		Ionic::Zip::EncryptionAlgorithm _encryption; // 0x78 (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::Zip::ZipEntryTimestamp _timestamp; // 0x7c (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::Zip::Zip64Option _zip64; // 0x80 (size: 0x4, flags: 0x3, type: 0x11)
		int _entryCount; // 0x84 (size: 0x4, flags: 0x1, type: 0x8)
		Ionic::Zip::ZipOption _alternateEncodingUsage; // 0x88 (size: 0x4, flags: 0x1, type: 0x11)
		bool _leaveUnderlyingStreamOpen; // 0x8c (size: 0x1, flags: 0x1, type: 0x2)
		bool _disposed; // 0x8d (size: 0x1, flags: 0x1, type: 0x2)
		bool _exceptionPending; // 0x8e (size: 0x1, flags: 0x1, type: 0x2)
		bool _anyEntriesUsedZip64; // 0x8f (size: 0x1, flags: 0x1, type: 0x2)
		bool _directoryNeededZip64; // 0x90 (size: 0x1, flags: 0x1, type: 0x2)
		bool _needToWriteEntryHeader; // 0x91 (size: 0x1, flags: 0x1, type: 0x2)
		bool _DontIgnoreCase; // 0x92 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 _ParallelDeflateThreshold; // 0x98 (size: 0x8, flags: 0x1, type: 0xa)
		int _maxBufferPairs; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
		int <CodecBufferSize>k__BackingField; // 0xa4 (size: 0x4, flags: 0x1, type: 0x8)
		Ionic::Zlib::CompressionStrategy <Strategy>k__BackingField; // 0xa8 (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::Zlib::CompressionLevel <CompressionLevel>k__BackingField; // 0xac (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::Zip::CompressionMethod <CompressionMethod>k__BackingField; // 0xb0 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xb8
}
