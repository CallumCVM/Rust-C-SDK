#pragma once

#include "GameObjectRef.h"
#include "SoundDefinition.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\GameObject.h"
#include "Sound.h"

namespace rust 
{
	class RottingFlies : public MonoBehaviour // 0x18
	{
	public:
		GameObjectRef* effect; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* soundDef; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* rootBone; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* particleInstance; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Sound* sound; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
