#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class RemoteStorageAppSyncProgress_t : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* CurrentFile; // 0x10 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned int AppID; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int BytesTransferredThisChunk; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		double DAppPercentComplete; // 0x20 (size: 0x8, flags: 0x6, type: 0xd)
		bool Uploading; // 0x28 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x30
}
