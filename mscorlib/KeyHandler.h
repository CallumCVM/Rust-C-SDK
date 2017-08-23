#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"

namespace Microsoft
{
	namespace Win32
{
	class KeyHandler : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Dir; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::Collections::Hashtable* values; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* file; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		bool dirty; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
