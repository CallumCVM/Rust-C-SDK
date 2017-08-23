#pragma once

#include "SoundDefinition.h"
#include "..\UnityEngine\Vector3.h"
#include "Sound.h"

namespace rust 
{
	class SoundPlayer : public BaseMonoBehaviour // 0x18
	{
	public:
		SoundDefinition* soundDefinition; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Sound* <sound>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool playImmediately; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool debugRepeat; // 0x29 (size: 0x1, flags: 0x6, type: 0x2)
		int playOnFrame; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		bool pending; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 soundOffset; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
