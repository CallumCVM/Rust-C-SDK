#pragma once

#include "..\System\IO\SearchPattern2\OpCode.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\SearchPattern2\Op.h"

namespace rust 
{
	class Op : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Argument; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::IO::SearchPattern2::Op* Next; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::IO::SearchPattern2::OpCode Code; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
