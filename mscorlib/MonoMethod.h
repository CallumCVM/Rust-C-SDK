#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
	class MonoMethod : public MethodInfo // 0x0
	{
	public:
		__int64 mhandle; // 0x10 (size: 0x8, flags: 0x3, type: 0x18)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* reftype; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
