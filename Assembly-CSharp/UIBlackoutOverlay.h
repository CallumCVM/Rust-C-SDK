#pragma once

#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class UIBlackoutOverlay : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::CanvasGroup* group; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 initialPosition; // 0x20 (size: 0xc, flags: 0x1, type: 0x11)
		blackoutType overlayType; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
