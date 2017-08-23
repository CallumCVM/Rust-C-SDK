#pragma once

#include "..\UnityEngine\Object.h"
#include "..\System\Action.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Entry : public ValueType // 0x0
	{
	public:
		UnityEngine::Object* TargetObject; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float MinDelay; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float RandDelay; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float NextCall; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		System::Action* Function; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		bool Errored; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* DebugName; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x40
}
