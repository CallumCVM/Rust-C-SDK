#pragma once

#include "..\System\AppDomainInitializer.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Initializer : public Object // 0x0
	{
	public:
		System::AppDomainInitializer* initializer; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** arguments; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
