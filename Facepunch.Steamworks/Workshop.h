#pragma once

#include "..\SteamNative\SteamUGC.h"
#include "..\Facepunch\Steamworks\Friends.h"
#include "..\Facepunch\Steamworks\BaseSteamworks.h"
#include "..\SteamNative\SteamRemoteStorage.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Workshop : public Object // 0x0
	{
	public:
		SteamNative::SteamUGC* ugc; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		Facepunch::Steamworks::Friends* friends; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		Facepunch::Steamworks::BaseSteamworks* steamworks; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamRemoteStorage* remoteStorage; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		System.Action<unsigned __int64,Facepunch.Steamworks.Callbacks.Result> OnFileDownloaded; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System.Action<unsigned __int64> OnItemInstalled; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x40
}
