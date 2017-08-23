#pragma once

namespace SteamNative
{
	class RemoteStoragePublishFileProgress_t : public ValueType // 0x0
	{
	public:
		double DPercentFile; // 0x10 (size: 0x8, flags: 0x6, type: 0xd)
		bool Preview; // 0x18 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x20
}
