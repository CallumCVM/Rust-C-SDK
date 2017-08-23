#pragma once

#include "..\UnityEngine\AudioClip.h"
#include "AchievementTodo.h"
#include "..\UnityEngine\Canvas.h"

namespace rust 
{
	class Achievements : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::AudioClip* listcomplete; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* itemcomplete; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* popup; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		AchievementTodo* items; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Canvas* canvas; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
