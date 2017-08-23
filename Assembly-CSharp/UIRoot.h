#pragma once

#include "..\UnityEngine\UI\GraphicRaycaster.h"
#include "..\UnityEngine\Canvas.h"

namespace rust 
{
	class UIRoot : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::GraphicRaycaster* graphicRaycasters; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Canvas* overlayCanvas; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
