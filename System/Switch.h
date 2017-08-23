#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Specialized\StringDictionary.h"

namespace System
{
	namespace Diagnostics
{
	class Switch : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* description; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* value; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* defaultSwitchValue; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Specialized::StringDictionary* attributes; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		int switchSetting; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		bool initialized; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
