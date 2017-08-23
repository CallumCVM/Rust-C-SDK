#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class ComputeNewPlayerCompatibilityResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		int CPlayersThatDontLikeCandidate; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int CPlayersThatCandidateDoesntLike; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int CClanPlayersThatDontLikeCandidate; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		unsigned __int64 SteamIDCandidate; // 0x20 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x28
}
