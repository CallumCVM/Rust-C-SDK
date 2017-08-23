#pragma once

#include "..\EasyAntiCheat\Client\LoadResult.h"

namespace EasyAntiCheat
{
	namespace Client
{
	class LoadCompletedEventArgs : public LoadEventArgs // 0x18
	{
	public:
		EasyAntiCheat::Client::LoadResult <Status>k__BackingField; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
