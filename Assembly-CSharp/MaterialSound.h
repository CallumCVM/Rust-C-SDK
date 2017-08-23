#pragma once

#include "SoundDefinition.h"
#include "..\MaterialSound\Entry.h"

namespace rust 
{
	class MaterialSound : public ScriptableObject // 0x18
	{
	public:
		SoundDefinition* DefaultSound; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		MaterialSound::Entry* Entries; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
