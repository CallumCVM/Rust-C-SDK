#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
	class StringReader : public TextReader // 0x18
	{
	public:
		UnityEngine::UnicodeString* source; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		int nextChar; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int sourceLength; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
