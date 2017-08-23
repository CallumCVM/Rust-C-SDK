#pragma once

#include "..\SteamNative\SteamApi.h"
#include "..\SteamNative\SteamClient.h"
#include "..\SteamNative\SteamUser.h"
#include "..\SteamNative\SteamApps.h"
#include "..\SteamNative\SteamAppList.h"
#include "..\SteamNative\SteamFriends.h"
#include "..\SteamNative\SteamMatchmakingServers.h"
#include "..\SteamNative\SteamMatchmaking.h"
#include "..\SteamNative\SteamInventory.h"
#include "..\SteamNative\SteamNetworking.h"
#include "..\SteamNative\SteamUserStats.h"
#include "..\SteamNative\SteamUtils.h"
#include "..\SteamNative\SteamScreenshots.h"
#include "..\SteamNative\SteamHTTP.h"
#include "..\SteamNative\SteamUGC.h"
#include "..\SteamNative\SteamGameServer.h"
#include "..\SteamNative\SteamGameServerStats.h"
#include "..\SteamNative\SteamRemoteStorage.h"
#include "..\SteamNative\HSteamUser.h"
#include "..\SteamNative\HSteamPipe.h"

namespace Facepunch
{
	namespace Steamworks
{
{
		namespace Interop
{
	class NativeInterface : public Object // 0x0
	{
	public:
		SteamNative::SteamApi* api; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamClient* client; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamUser* user; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamApps* apps; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamAppList* applist; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamFriends* friends; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamMatchmakingServers* servers; // 0x40 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamMatchmaking* matchmaking; // 0x48 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamInventory* inventory; // 0x50 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamNetworking* networking; // 0x58 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamUserStats* userstats; // 0x60 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamUtils* utils; // 0x68 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamScreenshots* screenshots; // 0x70 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamHTTP* http; // 0x78 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamUGC* ugc; // 0x80 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamGameServer* gameServer; // 0x88 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamGameServerStats* gameServerStats; // 0x90 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamRemoteStorage* remoteStorage; // 0x98 (size: 0x8, flags: 0x3, type: 0x12)
		bool isServer; // 0xa0 (size: 0x1, flags: 0x1, type: 0x2)
		SteamNative::HSteamUser hUser; // 0xa4 (size: 0x4, flags: 0x1, type: 0x11)
		SteamNative::HSteamPipe hPipe; // 0xa8 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xb0
}
