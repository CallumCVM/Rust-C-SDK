#pragma once

#include "..\System\Reflection\Assembly.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Reflection
{
	class Module : public Object // 0x0
	{
	public:
		__int64 _impl; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
		System::Reflection::Assembly* assembly; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::UnicodeString* fqname; // 0x20 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x28 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* scopename; // 0x30 (size: 0x8, flags: 0x3, type: 0xe)
		bool is_resource; // 0x38 (size: 0x1, flags: 0x3, type: 0x2)
		int token; // 0x3c (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x40
}
