#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Object.h"
#include "..\UnityEngine\AnimationEventSource.h"
#include "..\UnityEngine\AnimationState.h"
#include "..\UnityEngine\AnimatorStateInfo.h"
#include "..\UnityEngine\AnimatorClipInfo.h"

namespace UnityEngine
{
	class AnimationEvent : public Object // 0x0
	{
	public:
		float m_Time; // 0x10 (size: 0x4, flags: 0x3, type: 0xc)
		UnityEngine::UnicodeString* m_FunctionName; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* m_StringParameter; // 0x20 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::Object* m_ObjectReferenceParameter; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		float m_FloatParameter; // 0x30 (size: 0x4, flags: 0x3, type: 0xc)
		int m_IntParameter; // 0x34 (size: 0x4, flags: 0x3, type: 0x8)
		int m_MessageOptions; // 0x38 (size: 0x4, flags: 0x3, type: 0x8)
		UnityEngine::AnimationEventSource m_Source; // 0x3c (size: 0x4, flags: 0x3, type: 0x11)
		UnityEngine::AnimationState* m_StateSender; // 0x40 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::AnimatorStateInfo m_AnimatorStateInfo; // 0x48 (size: 0x24, flags: 0x3, type: 0x11)
		UnityEngine::AnimatorClipInfo m_AnimatorClipInfo; // 0x6c (size: 0x8, flags: 0x3, type: 0x11)
	}; // size = 0x78
}
