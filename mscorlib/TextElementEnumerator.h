#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Globalization
{
	class TextElementEnumerator : public Object // 0x0
	{
	public:
		int index; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int elementindex; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int startpos; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* str; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* element; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
