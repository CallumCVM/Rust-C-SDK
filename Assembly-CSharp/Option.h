#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Action<BasePlayer>.h"
#include "..\System\Action.h"
#include "..\UnityEngine\Sprite.h"

namespace GameMenu
{
	class Option : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* title; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* desc; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* requirements; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* icon; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		bool showOnItem; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		int order; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		float time; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		bool showDisabled; // 0x3c (size: 0x1, flags: 0x6, type: 0x2)
		bool show; // 0x3d (size: 0x1, flags: 0x6, type: 0x2)
		System::Action<BasePlayer> function; // 0x40 (size: 0x8, flags: 0x6, type: 0x15)
		System::Action* timeStart; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action* timeProgress; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* iconSprite; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* command; // 0x60 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x68
}
