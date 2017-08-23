#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Group : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> <Textures>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,float> <Floats>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,Rust.Workshop.Skin.Manifest.ColorEntry> <Colors>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
