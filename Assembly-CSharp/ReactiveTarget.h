#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\Animator.h"
#include "GameObjectRef.h"

namespace rust 
{
	class ReactiveTarget : public DecayEntity // 0x1f0
	{
	public:
		GameMenu::Option __menuOption_Lower_Target; // 0x1f0 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Reset_target; // 0x248 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::Animator* myAnimator; // 0x2a0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* bullseyeEffect; // 0x2a8 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* knockdownEffect; // 0x2b0 (size: 0x8, flags: 0x6, type: 0x12)
		float knockdownHealth; // 0x2b8 (size: 0x4, flags: 0x1, type: 0xc)
		float lastToggleTime; // 0x2bc (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x2c0
}
