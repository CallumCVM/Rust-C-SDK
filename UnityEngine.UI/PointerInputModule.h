#pragma once

#include "..\UnityEngine\EventSystems\PointerInputModule\MouseState.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class PointerInputModule : public BaseInputModule // 0x48
	{
	public:
		System.Collections.Generic.Dictionary<int,UnityEngine.EventSystems.PointerEventData> m_PointerData; // 0x48 (size: 0x8, flags: 0x4, type: 0x15)
		UnityEngine::EventSystems::PointerInputModule::MouseState* m_MouseState; // 0x50 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x58
}
