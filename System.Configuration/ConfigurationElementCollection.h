#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\IComparer.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationElementCollection : public ConfigurationElement // 0x70
	{
	public:
		System::Collections::ArrayList* list; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* removed; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* inherited; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IComparer* comparer; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* addElementName; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* clearElementName; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* removeElementName; // 0xa0 (size: 0x8, flags: 0x1, type: 0xe)
		bool emitClear; // 0xa8 (size: 0x1, flags: 0x1, type: 0x2)
		bool modified; // 0xa9 (size: 0x1, flags: 0x1, type: 0x2)
		int inheritedLimitIndex; // 0xac (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xb0
}
