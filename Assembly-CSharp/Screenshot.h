#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Screenshot : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* screenshotPath; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		int sizeMultiplier; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		bool takingScreenshot; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
