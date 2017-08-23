#pragma once

#include "..\UnityEngine\CanvasGroup.h"

namespace rust 
{
	class UIFadeOut : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::CanvasGroup* targetGroup; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float secondsToFadeOut; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		bool destroyOnFaded; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		float timeStarted; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
