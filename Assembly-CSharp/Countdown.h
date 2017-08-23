#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\UI\Text.h"

namespace rust 
{
	class Countdown : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* command; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UI::Text* textComponent; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int endTime; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int startTime; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		int step; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int sign; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
