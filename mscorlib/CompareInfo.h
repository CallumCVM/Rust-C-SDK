#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Globalization\Unicode\SimpleCollator.h"

namespace System
{
	namespace Globalization
{
	class CompareInfo : public Object // 0x0
	{
	public:
		int culture; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* icu_name; // 0x18 (size: 0x8, flags: 0x81, type: 0xe)
		int win32LCID; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* m_name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Globalization::Unicode::SimpleCollator* collator; // 0x30 (size: 0x8, flags: 0x81, type: 0x12)
	}; // size = 0x38
}
