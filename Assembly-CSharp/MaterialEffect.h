#pragma once

#include "GameObjectRef.h"
#include "..\MaterialEffect\Entry.h"

namespace rust 
{
	class MaterialEffect : public ScriptableObject // 0x18
	{
	public:
		GameObjectRef* DefaultEffect; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		MaterialEffect::Entry* Entries; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
