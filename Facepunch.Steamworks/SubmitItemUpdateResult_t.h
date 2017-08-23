#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class SubmitItemUpdateResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		bool UserNeedsToAcceptWorkshopLegalAgreement; // 0x14 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x18
}
