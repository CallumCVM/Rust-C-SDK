#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Reflection
{
	class ObfuscationAttribute : public Attribute // 0x0
	{
	public:
		bool exclude; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool strip; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		bool applyToMembers; // 0x12 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* feature; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
