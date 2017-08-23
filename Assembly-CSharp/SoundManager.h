#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class SoundManager : public SingletonComponent`1 // 0x18
	{
	public:
		System.Collections.Generic.Dictionary<SoundDefinition,UnityEngine::List<Sound>>* activeSoundsByDef; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<ISoundBudgetedUpdate>* budgetUpdatables; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<SoundPlayer>* pendingSoundPlayers; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<SoundManager.ScheduledSound>* scheduledSounds; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System::Diagnostics::Stopwatch* watch; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<Sound>* otherLocalSounds; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		int updatableIndex; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
