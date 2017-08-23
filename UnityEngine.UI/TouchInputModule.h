#pragma once

#include "..\UnityEngine\Vector2.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class TouchInputModule : public PointerInputModule // 0x58
	{
	public:
		UnityEngine::Vector2 m_LastMousePosition; // 0x58 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_MousePosition; // 0x60 (size: 0x8, flags: 0x1, type: 0x11)
		bool m_ForceModuleActive; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
