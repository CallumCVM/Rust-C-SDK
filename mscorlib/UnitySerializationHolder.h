#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\UnitySerializationHolder\UnityType.h"

namespace System
{
	class UnitySerializationHolder : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _data; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::UnitySerializationHolder::UnityType _unityType; // 0x18 (size: 0x1, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* _assemblyName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
