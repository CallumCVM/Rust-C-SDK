#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Sprite.h"
#include "..\System\Action<BasePlayer>.h"
#include "PieOption.h"

namespace rust 
{
	class MenuOption : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* desc; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* requirements; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Sprite* sprite; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action<BasePlayer> action; // 0x30 (size: 0x8, flags: 0x86, type: 0x15)
		PieOption* option; // 0x38 (size: 0x8, flags: 0x86, type: 0x12)
		bool disabled; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		int order; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		bool selected; // 0x48 (size: 0x1, flags: 0x86, type: 0x2)
	}; // size = 0x50
}
