#pragma once

#include "..\UnityEngine\EventSystems\EventSystem.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class BaseEventData : public AbstractEventData // 0x18
	{
	public:
		UnityEngine::EventSystems::EventSystem* m_EventSystem; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x20
}
