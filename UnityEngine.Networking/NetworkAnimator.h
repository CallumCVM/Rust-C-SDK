#pragma once

#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\Networking\NetworkWriter.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkAnimator : public NetworkBehaviour // 0x30
	{
	public:
		UnityEngine::Animator* m_Animator; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkWriter* m_ParameterWriter; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* param0; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* param1; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* param2; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* param3; // 0x58 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* param4; // 0x60 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* param5; // 0x68 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned int m_ParameterSendBits; // 0x70 (size: 0x4, flags: 0x1, type: 0x9)
		int m_AnimationHash; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		int m_TransitionHash; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		float m_SendTimer; // 0x7c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x80
}
