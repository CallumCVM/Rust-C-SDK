#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Sprite.h"

namespace GameMenu
{
	class Info : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* action; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* icon; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		bool hasMoreOptions; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::UnicodeString* entityName; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Sprite* iconSprite; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
