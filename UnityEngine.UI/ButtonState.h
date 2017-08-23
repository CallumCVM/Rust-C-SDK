#pragma once

#include "..\UnityEngine\EventSystems\PointerEventData\InputButton.h"
#include "..\UnityEngine\EventSystems\PointerInputModule\MouseButtonEventData.h"

namespace rust 
{
	class ButtonState : public Object // 0x0
	{
	public:
		UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* m_EventData; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::EventSystems::PointerEventData::InputButton m_Button; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
