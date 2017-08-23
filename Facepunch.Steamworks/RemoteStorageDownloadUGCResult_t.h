#pragma once

#include "..\SteamNative\Result.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class RemoteStorageDownloadUGCResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 File; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int AppID; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		int SizeInBytes; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* PchFileName; // 0x28 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned __int64 SteamIDOwner; // 0x30 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x38
}
