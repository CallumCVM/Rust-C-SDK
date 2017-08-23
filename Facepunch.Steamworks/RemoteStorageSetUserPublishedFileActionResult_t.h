#pragma once

#include "..\SteamNative\Result.h"
#include "..\SteamNative\WorkshopFileAction.h"

namespace SteamNative
{
	class RemoteStorageSetUserPublishedFileActionResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 PublishedFileId; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		SteamNative::WorkshopFileAction Action; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
