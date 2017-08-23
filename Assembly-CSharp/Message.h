#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Action.h"

namespace rust 
{
	class Message : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::Action* action; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
