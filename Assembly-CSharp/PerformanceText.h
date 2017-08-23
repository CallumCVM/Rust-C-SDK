#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class PerformanceText : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* text; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Text::StringBuilder* sb; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::Stopwatch* fpsTimer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
