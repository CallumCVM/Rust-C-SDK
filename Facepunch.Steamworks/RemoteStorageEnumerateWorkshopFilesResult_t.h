#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class RemoteStorageEnumerateWorkshopFilesResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		int ResultsReturned; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int TotalResultCount; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned __int64* GPublishedFileId; // 0x20 (size: 0x8, flags: 0x1006, type: 0x1d)
		float* GScore; // 0x28 (size: 0x8, flags: 0x1006, type: 0x1d)
		unsigned int AppId; // 0x30 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int StartIndex; // 0x34 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x38
}
