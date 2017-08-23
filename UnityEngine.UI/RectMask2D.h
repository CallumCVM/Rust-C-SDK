#pragma once

#include "..\UnityEngine\UI\RectangularVertexClipper.h"
#include "..\UnityEngine\RectTransform.h"
#include "..\System\Collections\Generic\HashSet<UnityEngine\UI\IClippable>.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Rect.h"

namespace UnityEngine
{
	namespace UI
{
	class RectMask2D : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::UI::RectangularVertexClipper* m_VertexClipper; // 0x18 (size: 0x8, flags: 0xa1, type: 0x12)
		UnityEngine::RectTransform* m_RectTransform; // 0x20 (size: 0x8, flags: 0x81, type: 0x12)
		System::Collections::Generic::HashSet<UnityEngine::UI::IClippable> m_ClipTargets; // 0x28 (size: 0x8, flags: 0x81, type: 0x15)
		UnityEngine::List<UnityEngine.UI.RectMask2D>* m_Clippers; // 0x30 (size: 0x8, flags: 0x81, type: 0x15)
		bool m_ShouldRecalculateClipRects; // 0x38 (size: 0x1, flags: 0x81, type: 0x2)
		UnityEngine::Rect m_LastClipRectCanvasSpace; // 0x3c (size: 0x10, flags: 0x81, type: 0x11)
		bool m_LastValidClipRect; // 0x4c (size: 0x1, flags: 0x81, type: 0x2)
		bool m_ForceClip; // 0x4d (size: 0x1, flags: 0x81, type: 0x2)
	}; // size = 0x50
}
