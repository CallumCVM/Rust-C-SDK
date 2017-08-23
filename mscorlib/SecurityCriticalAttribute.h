#pragma once

#include "..\System\Security\SecurityCriticalScope.h"

namespace System
{
	namespace Security
{
	class SecurityCriticalAttribute : public Attribute // 0x0
	{
	public:
		System::Security::SecurityCriticalScope _scope; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
