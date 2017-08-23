#pragma once

#include "..\UnityEngine\Rect.h"
#include "..\UnityEngine\Vector2.h"

namespace UnityEngine
{
	class ScrollViewState : public Object // 0x0
	{
	public:
		UnityEngine::Rect position; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Rect visibleRect; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Rect viewRect; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 scrollPosition; // 0x40 (size: 0x8, flags: 0x6, type: 0x11)
		bool apply; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x50
}
