#pragma once

#include "..\System\Type.h"

namespace UnityEngine
{
	class RequireComponent : public Attribute // 0x0
	{
	public:
		System::Type* m_Type0; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Type* m_Type1; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Type* m_Type2; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
