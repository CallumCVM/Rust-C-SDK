#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "BasePlayer.h"

namespace rust 
{
	class FootstepEffects : public BaseFootstepEffect // 0x30
	{
	public:
		UnityEngine::Transform* leftFoot; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* rightFoot; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* footstepEffectName; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* jumpStartEffectName; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* jumpLandEffectName; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
		BasePlayer* player; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		bool lastWasLeft; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
		bool lastWasStopped; // 0x61 (size: 0x1, flags: 0x1, type: 0x2)
		bool isOnGround; // 0x62 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
