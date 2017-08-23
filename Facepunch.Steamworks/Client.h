#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\DirectoryInfo.h"
#include "..\Facepunch\Steamworks\Voice.h"
#include "..\Facepunch\Steamworks\ServerList.h"
#include "..\Facepunch\Steamworks\App.h"
#include "..\Facepunch\Steamworks\Achievements.h"
#include "..\Facepunch\Steamworks\Stats.h"
#include "..\Facepunch\Steamworks\MicroTransactions.h"
#include "..\Facepunch\Steamworks\User.h"
#include "..\Facepunch\Steamworks\RemoteStorage.h"
#include "..\Facepunch\Steamworks\Auth.h"
#include "..\Facepunch\Steamworks\Friends.h"
#include "..\Facepunch\Steamworks\Overlay.h"
#include "..\Facepunch\Steamworks\Screenshots.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Client : public BaseSteamworks // 0x48
	{
	public:
		UnityEngine::UnicodeString* <Username>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <BetaName>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::DirectoryInfo* <InstallFolder>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <CurrentLanguage>k__BackingField; // 0x60 (size: 0x8, flags: 0x21, type: 0xe)
		UnityEngine::UnicodeString** <AvailableLanguages>k__BackingField; // 0x68 (size: 0x8, flags: 0x21, type: 0x1d)
		Facepunch::Steamworks::Voice* <Voice>k__BackingField; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::ServerList* <ServerList>k__BackingField; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::App* <App>k__BackingField; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Achievements* <Achievements>k__BackingField; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Stats* <Stats>k__BackingField; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::MicroTransactions* <MicroTransactions>k__BackingField; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::User* <User>k__BackingField; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::RemoteStorage* <RemoteStorage>k__BackingField; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Auth* _auth; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Friends* _friends; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Overlay* _overlay; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Screenshots* _screenshots; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned __int64 <SteamId>k__BackingField; // 0xd0 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 <OwnerSteamId>k__BackingField; // 0xd8 (size: 0x8, flags: 0x1, type: 0xb)
		int <BuildId>k__BackingField; // 0xe0 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xe8
}
