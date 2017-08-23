#pragma once

#include "..\System\Security\SecurityContext.h"

namespace System
{
	namespace Threading
{
	class ExecutionContext : public Object // 0x0
	{
	public:
		System::Security::SecurityContext* _sc; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool _suppressFlow; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool _capture; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
