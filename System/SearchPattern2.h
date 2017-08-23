#pragma once

#include "..\System\IO\SearchPattern2\Op.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
	class SearchPattern2 : public Object // 0x0
	{
	public:
		System::IO::SearchPattern2::Op* ops; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* pattern; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool ignore; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool hasWildcard; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
