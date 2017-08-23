#pragma once

#include "..\System\DateTime.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class StatusInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Content; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Type; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::DateTime DateTime; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
