#pragma once

#include "..\UnityEngine\UI\LayoutElement.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\Canvas.h"

namespace Facepunch
{
	class PerformanceUI : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::LayoutElement* rainbow; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UI::Text* info; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* fps; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* ms; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* mb; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* gc; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Canvas* Canvas; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		float updateTime; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x58
}
