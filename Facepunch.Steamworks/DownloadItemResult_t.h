#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class DownloadItemResult_t : public ValueType // 0x0
	{
	public:
		unsigned int AppID; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned __int64 PublishedFileId; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		SteamNative::Result Result; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
