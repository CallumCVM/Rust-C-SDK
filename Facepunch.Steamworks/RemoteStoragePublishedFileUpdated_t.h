#pragma once

namespace SteamNative
{
	class RemoteStoragePublishedFileUpdated_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 PublishedFileId; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int AppID; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned __int64 Unused; // 0x20 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x28
}
