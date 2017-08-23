#pragma once

#include "..\SteamNative\Result.h"
#include "..\SteamNative\WorkshopFileAction.h"

namespace SteamNative
{
	class RemoteStorageEnumeratePublishedFilesByUserActionResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		SteamNative::WorkshopFileAction Action; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		int ResultsReturned; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int TotalResultCount; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		unsigned __int64* GPublishedFileId; // 0x20 (size: 0x8, flags: 0x1006, type: 0x1d)
		unsigned int* GRTimeUpdated; // 0x28 (size: 0x8, flags: 0x1006, type: 0x1d)
	}; // size = 0x30
}
