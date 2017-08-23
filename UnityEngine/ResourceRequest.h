#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"

namespace UnityEngine
{
	class ResourceRequest : public AsyncOperation // 0x18
	{
	public:
		UnityEngine::UnicodeString* m_Path; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		System::Type* m_Type; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
