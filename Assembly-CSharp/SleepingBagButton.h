#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\ProtoBuf\RespawnInformation\SpawnOptions.h"

namespace rust 
{
	class SleepingBagButton : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* timerInfo; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* BagName; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* LockTime; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* button; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		ProtoBuf::RespawnInformation::SpawnOptions* spawnOptions; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		float releaseTime; // 0x40 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x48
}
