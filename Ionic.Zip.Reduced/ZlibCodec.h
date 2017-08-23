#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Ionic\Zlib\DeflateManager.h"
#include "..\Ionic\Zlib\InflateManager.h"
#include "..\Ionic\Zlib\CompressionLevel.h"
#include "..\Ionic\Zlib\CompressionStrategy.h"

namespace Ionic
{
	namespace Zlib
{
	class ZlibCodec : public Object // 0x0
	{
	public:
		unsigned char* InputBuffer; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* OutputBuffer; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* Message; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		Ionic::Zlib::DeflateManager* dstate; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		Ionic::Zlib::InflateManager* istate; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		int NextIn; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		int AvailableBytesIn; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		__int64 TotalBytesIn; // 0x40 (size: 0x8, flags: 0x6, type: 0xa)
		int NextOut; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		int AvailableBytesOut; // 0x4c (size: 0x4, flags: 0x6, type: 0x8)
		__int64 TotalBytesOut; // 0x50 (size: 0x8, flags: 0x6, type: 0xa)
		unsigned int _Adler32; // 0x58 (size: 0x4, flags: 0x3, type: 0x9)
		Ionic::Zlib::CompressionLevel CompressLevel; // 0x5c (size: 0x4, flags: 0x6, type: 0x11)
		int WindowBits; // 0x60 (size: 0x4, flags: 0x6, type: 0x8)
		Ionic::Zlib::CompressionStrategy Strategy; // 0x64 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x68
}
