#pragma once

#include "..\Facepunch\Steamworks\Client.h"
#include "..\System\Collections\Generic\Queue<System\Action>.h"
#include "..\Facepunch\Steamworks\Leaderboard\Entry.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Leaderboard : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System::Collections::Generic::Queue<System::Action> _onCreated; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		Facepunch::Steamworks::Leaderboard::Entry* Results; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* <Name>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned __int64 BoardId; // 0x30 (size: 0x8, flags: 0x3, type: 0xb)
		int <TotalEntries>k__BackingField; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		bool <IsError>k__BackingField; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsQuerying>k__BackingField; // 0x3d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
