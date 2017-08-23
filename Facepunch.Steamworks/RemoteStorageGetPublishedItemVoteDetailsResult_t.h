#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class RemoteStorageGetPublishedItemVoteDetailsResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 PublishedFileId; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		int VotesFor; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int VotesAgainst; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		int Reports; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		float FScore; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
