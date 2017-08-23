#pragma once

#include "..\UnityEngine\UI\Collections\IndexedSet<UnityEngine\UI\ICanvasElement>.h"

namespace UnityEngine
{
	namespace UI
{
	class CanvasUpdateRegistry : public Object // 0x0
	{
	public:
		UnityEngine::UI::Collections::IndexedSet<UnityEngine::UI::ICanvasElement> m_LayoutRebuildQueue; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::UI::Collections::IndexedSet<UnityEngine::UI::ICanvasElement> m_GraphicRebuildQueue; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		bool m_PerformingLayoutUpdate; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_PerformingGraphicUpdate; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
