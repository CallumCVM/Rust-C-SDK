#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Security
{
	class SecurityElement : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* text; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* tag; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* attributes; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* children; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
