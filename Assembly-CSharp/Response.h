#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\RCon\LogType.h"

namespace rust 
{
	class Response : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* Message; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		int Identifier; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		Facepunch::RCon::LogType Type; // 0x1c (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* Stacktrace; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x28
}
