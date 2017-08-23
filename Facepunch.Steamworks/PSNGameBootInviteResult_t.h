#pragma once

namespace SteamNative
{
	class PSNGameBootInviteResult_t : public ValueType // 0x0
	{
	public:
		bool GameBootInviteExists; // 0x10 (size: 0x1, flags: 0x1006, type: 0x2)
		unsigned __int64 SteamIDLobby; // 0x14 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x20
}
