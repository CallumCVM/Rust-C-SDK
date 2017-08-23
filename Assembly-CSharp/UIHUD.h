#pragma once

#include "UIChat.h"
#include "HudElement.h"
#include "..\UnityEngine\CanvasGroup.h"

namespace rust 
{
	class UIHUD : public SingletonComponent`1 // 0x18
	{
	public:
		UIChat* chatPanel; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		HudElement* Hunger; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		HudElement* Thirst; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		HudElement* Health; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* canvasGroup; // 0x38 (size: 0x8, flags: 0x4, type: 0x12)
		bool visible; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
