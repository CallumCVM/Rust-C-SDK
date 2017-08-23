#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class NPCFootstepEffects : public BaseFootstepEffect // 0x30
	{
	public:
		UnityEngine::UnicodeString* impactEffectDirectory; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Transform* frontLeftFoot; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* frontRightFoot; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* backLeftFoot; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* backRightFoot; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x58
}
