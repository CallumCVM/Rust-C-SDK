#pragma once

#include "..\System\Nullable<System\DateTime>.h"
#include "..\Ionic\Zlib\ZlibBaseStream.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Ionic
{
	namespace Zlib
{
	class GZipStream : public Stream // 0x18
	{
	public:
		Ionic::Zlib::ZlibBaseStream* _baseStream; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::UnicodeString* _FileName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _Comment; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Nullable<System::DateTime> LastModified; // 0x30 (size: 0x18, flags: 0x6, type: 0x15)
		int _headerByteCount; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		bool _disposed; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
		bool _firstReadDone; // 0x4d (size: 0x1, flags: 0x1, type: 0x2)
		int _Crc32; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
