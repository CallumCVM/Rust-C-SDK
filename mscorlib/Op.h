#pragma once

#include "..\System\IO\SearchPattern\OpCode.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\SearchPattern\Op.h"

namespace rust 
{
	class Op : public Object // 0x0
	{
	public:
		System::IO::SearchPattern::OpCode Code; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* Argument; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::IO::SearchPattern::Op* Next; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
