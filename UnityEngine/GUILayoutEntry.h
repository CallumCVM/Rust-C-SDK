#pragma once

#include "..\UnityEngine\Rect.h"
#include "..\UnityEngine\GUIStyle.h"

namespace UnityEngine
{
	class GUILayoutEntry : public Object // 0x0
	{
	public:
		UnityEngine::GUIStyle* m_Style; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		float minWidth; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float maxWidth; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float minHeight; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float maxHeight; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Rect rect; // 0x28 (size: 0x10, flags: 0x6, type: 0x11)
		int stretchWidth; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		int stretchHeight; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
