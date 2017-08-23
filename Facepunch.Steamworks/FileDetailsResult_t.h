#pragma once

#include "..\SteamNative\Result.h"
#include "..\System\Char.h"

namespace SteamNative
{
	class FileDetailsResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 FileSize; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		System::Char FileSHA; // 0x20 (size: 0x2, flags: 0x1006, type: 0x3)
		unsigned int Flags; // 0x24 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
