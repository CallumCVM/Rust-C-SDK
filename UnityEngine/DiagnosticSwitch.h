#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\DiagnosticSwitchFlags.h"
#include "..\System\Object.h"
#include "..\UnityEngine\EnumInfo.h"

namespace UnityEngine
{
	class DiagnosticSwitch : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* description; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::DiagnosticSwitchFlags flags; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		System::Object value; // 0x28 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Object minValue; // 0x30 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Object maxValue; // 0x38 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Object persistentValue; // 0x40 (size: 0x8, flags: 0x6, type: 0x1c)
		UnityEngine::EnumInfo* enumInfo; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x50
}
