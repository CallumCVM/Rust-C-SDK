#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Globalization\CompareOptions.h"

namespace System
{
	namespace Globalization
{
	class SortKey : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* source; // 0x10 (size: 0x8, flags: 0x21, type: 0xe)
		System::Globalization::CompareOptions options; // 0x18 (size: 0x4, flags: 0x21, type: 0x11)
		unsigned char* key; // 0x20 (size: 0x8, flags: 0x21, type: 0x1d)
		int lcid; // 0x28 (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x30
}
