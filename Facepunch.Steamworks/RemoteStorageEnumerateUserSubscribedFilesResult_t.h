#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class RemoteStorageEnumerateUserSubscribedFilesResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		int ResultsReturned; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int TotalResultCount; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned __int64* GPublishedFileId; // 0x20 (size: 0x8, flags: 0x1006, type: 0x1d)
		unsigned int* GRTimeSubscribed; // 0x28 (size: 0x8, flags: 0x1006, type: 0x1d)
	}; // size = 0x30
}
