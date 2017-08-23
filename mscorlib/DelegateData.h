#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	class DelegateData : public Object // 0x0
	{
	public:
		System::Type* target_type; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* method_name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
