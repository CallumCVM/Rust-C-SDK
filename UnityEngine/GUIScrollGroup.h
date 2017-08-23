#pragma once

#include "..\UnityEngine\GUIStyle.h"

namespace UnityEngine
{
	class GUIScrollGroup : public GUILayoutGroup // 0x80
	{
	public:
		UnityEngine::GUIStyle* horizontalScrollbar; // 0x80 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GUIStyle* verticalScrollbar; // 0x88 (size: 0x8, flags: 0x6, type: 0x12)
		float calcMinWidth; // 0x90 (size: 0x4, flags: 0x6, type: 0xc)
		float calcMaxWidth; // 0x94 (size: 0x4, flags: 0x6, type: 0xc)
		float calcMinHeight; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		float calcMaxHeight; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
		float clientWidth; // 0xa0 (size: 0x4, flags: 0x6, type: 0xc)
		float clientHeight; // 0xa4 (size: 0x4, flags: 0x6, type: 0xc)
		bool allowHorizontalScroll; // 0xa8 (size: 0x1, flags: 0x6, type: 0x2)
		bool allowVerticalScroll; // 0xa9 (size: 0x1, flags: 0x6, type: 0x2)
		bool needsHorizontalScrollbar; // 0xaa (size: 0x1, flags: 0x6, type: 0x2)
		bool needsVerticalScrollbar; // 0xab (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xb0
}
