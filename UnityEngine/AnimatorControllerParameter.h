#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\AnimatorControllerParameterType.h"

namespace UnityEngine
{
	class AnimatorControllerParameter : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_Name; // 0x10 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::AnimatorControllerParameterType m_Type; // 0x18 (size: 0x4, flags: 0x3, type: 0x11)
		float m_DefaultFloat; // 0x1c (size: 0x4, flags: 0x3, type: 0xc)
		int m_DefaultInt; // 0x20 (size: 0x4, flags: 0x3, type: 0x8)
		bool m_DefaultBool; // 0x24 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x28
}
