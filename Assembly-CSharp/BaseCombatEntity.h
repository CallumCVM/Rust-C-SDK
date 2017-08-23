#pragma once

#include "..\GameMenu\Option.h"
#include "SkeletonProperties.h"
#include "ProtectionProperties.h"

namespace rust 
{
	class BaseCombatEntity : public BaseEntity // 0x130
	{
	public:
		GameMenu::Option __menuOption_Menu_Pickup; // 0x130 (size: 0x58, flags: 0x1, type: 0x11)
		SkeletonProperties* skeletonProperties; // 0x188 (size: 0x8, flags: 0x6, type: 0x12)
		ProtectionProperties* baseProtection; // 0x190 (size: 0x8, flags: 0x6, type: 0x12)
		Pickup pickup; // 0x198 (size: 0x20, flags: 0x6, type: 0x11)
		Repair repair; // 0x1b8 (size: 0x10, flags: 0x6, type: 0x11)
		float startHealth; // 0x1c8 (size: 0x4, flags: 0x6, type: 0xc)
		bool ShowHealthInfo; // 0x1cc (size: 0x1, flags: 0x6, type: 0x2)
		LifeState lifestate; // 0x1d0 (size: 0x4, flags: 0x6, type: 0x11)
		bool sendsHitNotification; // 0x1d4 (size: 0x1, flags: 0x6, type: 0x2)
		bool sendsMeleeHitNotification; // 0x1d5 (size: 0x1, flags: 0x6, type: 0x2)
		float _health; // 0x1d8 (size: 0x4, flags: 0x1, type: 0xc)
		float _maxHealth; // 0x1dc (size: 0x4, flags: 0x1, type: 0xc)
		float DeathTime; // 0x1e0 (size: 0x4, flags: 0x4, type: 0xc)
		int lastNotifyFrame; // 0x1e4 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x1e8
}
