#pragma once

#include "..\UnityEngine\UI\CanvasScaler.h"

namespace rust 
{
	class UIRootScaled : public UIRoot // 0x28
	{
	public:
		UnityEngine::UI::CanvasScaler* scaler; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
