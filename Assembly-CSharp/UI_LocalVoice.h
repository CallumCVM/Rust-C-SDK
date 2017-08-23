#pragma once

#include "..\UnityEngine\CanvasGroup.h"

namespace rust 
{
	class UI_LocalVoice : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::CanvasGroup* voiceCanvas; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* levelImage; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
