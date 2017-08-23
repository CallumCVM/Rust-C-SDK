#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Translate\Phrase.h"

namespace rust 
{
	class AchievementItem : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		Translate::Phrase* Phrase; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
