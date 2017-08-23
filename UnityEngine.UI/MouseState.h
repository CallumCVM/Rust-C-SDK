#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class MouseState : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.EventSystems.PointerInputModule.ButtonState>* m_TrackedButtons; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
