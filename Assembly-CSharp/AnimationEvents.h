#pragma once

#include "..\UnityEngine\Transform.h"
#include "HeldEntity.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class AnimationEvents : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* rootObject; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		HeldEntity* targetEntity; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* effectFolder; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* localFolder; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		bool IsBusy; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x40
}
