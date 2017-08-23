#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\Text\Encoding.h"
#include "..\Ionic\Zip\ZipEntry.h"
#include "..\Ionic\Zip\ZipContainer.h"
#include "..\Ionic\Crc\CrcCalculatorStream.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Ionic
{
	namespace Zip
{
	class ZipInputStream : public Stream // 0x18
	{
	public:
		System::IO::Stream* _inputStream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* _provisionalAlternateEncoding; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::ZipEntry* _currentEntry; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::ZipContainer* _container; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Crc::CrcCalculatorStream* _crcStream; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _Password; // 0x40 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* _name; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		bool _firstEntry; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		bool _needSetup; // 0x51 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 _LeftToRead; // 0x58 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 _endOfEntry; // 0x60 (size: 0x8, flags: 0x1, type: 0xa)
		bool _leaveUnderlyingStreamOpen; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool _closed; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
		bool _findRequired; // 0x6a (size: 0x1, flags: 0x1, type: 0x2)
		bool _exceptionPending; // 0x6b (size: 0x1, flags: 0x1, type: 0x2)
		int <CodecBufferSize>k__BackingField; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
