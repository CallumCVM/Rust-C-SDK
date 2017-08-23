#pragma once

#include "..\SteamNative\AuthSessionResponse.h"

namespace SteamNative
{
	class ValidateAuthTicketResponse_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamID; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		SteamNative::AuthSessionResponse AuthSessionResponse; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 OwnerSteamID; // 0x1c (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x28
}
