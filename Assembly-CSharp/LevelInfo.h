#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class LevelInfo : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::UnicodeString* shortName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* displayName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* description; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Texture2D* image; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		int version; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
