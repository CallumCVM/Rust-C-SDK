#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Object.h"

namespace rust 
{
	class FieldWithTarget : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_ParamName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Object* m_Target; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_FieldPath; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_TypeString; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_StaticString; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		bool m_DoStatic; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
