#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Text
{
	class StringBuilder : public Object // 0x0
	{
	public:
		int _length; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* _str; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _cached_str; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int _maxCapacity; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
