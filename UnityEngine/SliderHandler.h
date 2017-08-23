#pragma once

#include "..\UnityEngine\Rect.h"
#include "..\UnityEngine\GUIStyle.h"

namespace UnityEngine
{
	class SliderHandler : public ValueType // 0x0
	{
	public:
		UnityEngine::Rect position; // 0x10 (size: 0x10, flags: 0x21, type: 0x11)
		float currentValue; // 0x20 (size: 0x4, flags: 0x21, type: 0xc)
		float size; // 0x24 (size: 0x4, flags: 0x21, type: 0xc)
		float start; // 0x28 (size: 0x4, flags: 0x21, type: 0xc)
		float end; // 0x2c (size: 0x4, flags: 0x21, type: 0xc)
		UnityEngine::GUIStyle* slider; // 0x30 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::GUIStyle* thumb; // 0x38 (size: 0x8, flags: 0x21, type: 0x12)
		bool horiz; // 0x40 (size: 0x1, flags: 0x21, type: 0x2)
		int id; // 0x44 (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x48
}
