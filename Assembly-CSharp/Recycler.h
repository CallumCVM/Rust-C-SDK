#pragma once

#include "..\GameMenu\Option.h"
#include "SoundDefinition.h"
#include "GameObjectRef.h"
#include "..\SoundModulation\Modulator.h"
#include "Sound.h"

namespace rust 
{
	class Recycler : public StorageContainer // 0x2e8
	{
	public:
		GameMenu::Option __menuOption_Menu_TurnOff; // 0x2e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_TurnOn; // 0x340 (size: 0x58, flags: 0x1, type: 0x11)
		SoundDefinition* grindingLoopDef; // 0x398 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* startSound; // 0x3a0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* stopSound; // 0x3a8 (size: 0x8, flags: 0x6, type: 0x12)
		SoundModulation::Modulator* grindingSoundModulator; // 0x3b0 (size: 0x8, flags: 0x1, type: 0x12)
		Sound* grindingLoop; // 0x3b8 (size: 0x8, flags: 0x1, type: 0x12)
		float recycleEfficiency; // 0x3c0 (size: 0x4, flags: 0x6, type: 0xc)
		bool lastFrameOn; // 0x3c4 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x3c8
}
