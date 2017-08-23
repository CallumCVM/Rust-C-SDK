#pragma once

#include "..\Facepunch\Steamworks\Client.h"

namespace Facepunch
{
	namespace Steamworks
{
	class ServerList : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System.Collections.Generic.HashSet<unsigned __int64> FavouriteHash; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.HashSet<unsigned __int64> HistoryHash; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
