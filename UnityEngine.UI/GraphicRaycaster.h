#pragma once

#include "..\UnityEngine\UI\GraphicRaycaster\BlockingObjects.h"
#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\Canvas.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace UI
{
	class GraphicRaycaster : public BaseRaycaster // 0x18
	{
	public:
		UnityEngine::Canvas* m_Canvas; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.UI.Graphic>* m_RaycastResults; // 0x20 (size: 0x8, flags: 0x81, type: 0x15)
		bool m_IgnoreReversedGraphics; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UI::GraphicRaycaster::BlockingObjects m_BlockingObjects; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::LayerMask m_BlockingMask; // 0x30 (size: 0x4, flags: 0x4, type: 0x11)
	}; // size = 0x38
}
