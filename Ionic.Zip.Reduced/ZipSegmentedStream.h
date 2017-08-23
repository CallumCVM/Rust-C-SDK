#pragma once

#include "..\Ionic\Zip\ZipSegmentedStream\RwMode.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\Stream.h"

namespace Ionic
{
	namespace Zip
{
	class ZipSegmentedStream : public Stream // 0x18
	{
	public:
		UnityEngine::UnicodeString* _baseName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _baseDir; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _currentName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _currentTempName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::Stream* _innerStream; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::ZipSegmentedStream::RwMode rwMode; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		bool _exceptionPending; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int _currentDiskNumber; // 0x48 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int _maxDiskNumber; // 0x4c (size: 0x4, flags: 0x1, type: 0x9)
		int _maxSegmentSize; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		bool <ContiguousWrite>k__BackingField; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
