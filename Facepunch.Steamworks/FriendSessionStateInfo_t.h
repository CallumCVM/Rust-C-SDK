#pragma once

namespace SteamNative
{
	class FriendSessionStateInfo_t : public ValueType // 0x0
	{
	public:
		unsigned int IOnlineSessionInstances; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned char IPublishedToFriendsSessionInstance; // 0x14 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x18
}
