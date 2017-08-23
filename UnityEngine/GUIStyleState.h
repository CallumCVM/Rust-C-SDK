#pragma once

#include "..\UnityEngine\GUIStyle.h"
#include "..\UnityEngine\Texture2D.h"

namespace UnityEngine
{
	class GUIStyleState : public Object // 0x0
	{
	public:
		__int64 m_Ptr; // 0x10 (size: 0x8, flags: 0x83, type: 0x18)
		UnityEngine::GUIStyle* m_SourceStyle; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::Texture2D* m_Background; // 0x20 (size: 0x8, flags: 0x81, type: 0x12)
	}; // size = 0x28
}
