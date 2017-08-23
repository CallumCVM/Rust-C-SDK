#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\GameStat\Stat.h"

namespace rust 
{
	class GameStat : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* title; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* globalStat; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* localStat; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		GameStat::Stat* stats; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		GameStat::Stat* unshownStats; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		Stat stat; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
		float refreshTime; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		__int64 globalValue; // 0x58 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 localValue; // 0x60 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 oldGlobalValue; // 0x68 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 oldLocalValue; // 0x70 (size: 0x8, flags: 0x1, type: 0xa)
		float secondsSinceRefresh; // 0x78 (size: 0x4, flags: 0x1, type: 0xc)
		float secondsUntilUpdate; // 0x7c (size: 0x4, flags: 0x1, type: 0xc)
		float secondsUntilChange; // 0x80 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x88
}
