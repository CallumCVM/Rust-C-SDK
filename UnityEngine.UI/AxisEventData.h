#pragma once

#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\EventSystems\MoveDirection.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class AxisEventData : public BaseEventData // 0x20
	{
	public:
		UnityEngine::Vector2 <moveVector>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::EventSystems::MoveDirection <moveDir>k__BackingField; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
