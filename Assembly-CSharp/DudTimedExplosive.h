#pragma once

#include "..\GameMenu\Option.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\AudioSource.h"
#include "ItemDefinition.h"

namespace rust 
{
	class DudTimedExplosive : public TimedExplosive // 0x168
	{
	public:
		GameMenu::Option __menuOption_Menu_Pickup; // 0x168 (size: 0x58, flags: 0x1, type: 0x11)
		GameObjectRef* fizzleEffect; // 0x1c0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* wickSpark; // 0x1c8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioSource* wickSound; // 0x1d0 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* itemToGive; // 0x1d8 (size: 0x8, flags: 0x6, type: 0x12)
		float dudChance; // 0x1e0 (size: 0x4, flags: 0x6, type: 0xc)
		float explodeTime; // 0x1e4 (size: 0x4, flags: 0x81, type: 0xc)
	}; // size = 0x1e8
}
