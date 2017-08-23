#pragma once

#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class StandaloneInputModule : public PointerInputModule // 0x58
	{
	public:
		UnityEngine::GameObject* m_CurrentFocusedGameObject; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_HorizontalAxis; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_VerticalAxis; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_SubmitButton; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_CancelButton; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		float m_PrevActionTime; // 0x80 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector2 m_LastMoveVector; // 0x84 (size: 0x8, flags: 0x1, type: 0x11)
		int m_ConsecutiveMoveCount; // 0x8c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Vector2 m_LastMousePosition; // 0x90 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_MousePosition; // 0x98 (size: 0x8, flags: 0x1, type: 0x11)
		float m_InputActionsPerSecond; // 0xa0 (size: 0x4, flags: 0x1, type: 0xc)
		float m_RepeatDelay; // 0xa4 (size: 0x4, flags: 0x1, type: 0xc)
		bool m_ForceModuleActive; // 0xa8 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xb0
}
