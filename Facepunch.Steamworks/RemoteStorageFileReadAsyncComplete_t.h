#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class RemoteStorageFileReadAsyncComplete_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 FileReadAsync; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		SteamNative::Result Result; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int Offset; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Read; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
