#pragma once

#include "..\UnityEngine\EventSystems\PointerEventData\FramePressState.h"
#include "..\UnityEngine\EventSystems\PointerEventData.h"

namespace rust 
{
	class MouseButtonEventData : public Object // 0x0
	{
	public:
		UnityEngine::EventSystems::PointerEventData* buttonData; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::EventSystems::PointerEventData::FramePressState buttonState; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
