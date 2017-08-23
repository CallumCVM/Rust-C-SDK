#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class WorkshopBase : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* title; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* description; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Texture2D* previewImage; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned __int64 itemID; // 0x30 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x38
}
