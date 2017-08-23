#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"
#include "..\System\DelegateSerializationHolder\DelegateEntry.h"

namespace rust 
{
	class DelegateEntry : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* type; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* assembly; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object target; // 0x20 (size: 0x8, flags: 0x6, type: 0x1c)
		UnityEngine::UnicodeString* targetTypeAssembly; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* targetTypeName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* methodName; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::DelegateSerializationHolder::DelegateEntry* delegateEntry; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x48
}
