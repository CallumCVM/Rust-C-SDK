#pragma once

#include "..\System\Collections\Generic\Stack<UnityEngine\Object>.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Pool : public Object // 0x0
	{
	public:
		System::Collections::Generic::Stack<UnityEngine::Object> stack; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		int allocated; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int available; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
