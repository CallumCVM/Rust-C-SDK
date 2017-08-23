#pragma once

#include "..\Facepunch\Steamworks\Client.h"
#include "..\Facepunch\Steamworks\Achievement.h"
#include "..\System\Action.h"
#include "..\System\Action<Facepunch\Steamworks\Achievement>.h"
#include "..\UnityEngine\List.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Achievements : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		Facepunch::Steamworks::Achievement* <All>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Action* OnUpdated; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action<Facepunch::Steamworks::Achievement> OnAchievementStateChanged; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<Facepunch.Steamworks.Achievement>* unlockedRecently; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x38
}
