#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class RemoteStorageAppSyncedClient_t : public ValueType // 0x0
	{
	public:
		unsigned int AppID; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		SteamNative::Result Result; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		int NumDownloads; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
