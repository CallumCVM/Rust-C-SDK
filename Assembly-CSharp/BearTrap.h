#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class BearTrap : public BaseTrap // 0x1f0
	{
	public:
		GameMenu::Option __menuOption_Arm_Beartrap; // 0x1f0 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::Animator* animator; // 0x248 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::GameObject* hurtTarget; // 0x250 (size: 0x8, flags: 0x1, type: 0x12)
		bool initialized; // 0x258 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x260
}
