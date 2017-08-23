#pragma once

#include "..\System\Threading\CompressedStack.h"

namespace System
{
	namespace Security
{
	class SecurityContext : public Object // 0x0
	{
	public:
		bool _capture; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 _winid; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		System::Threading::CompressedStack* _stack; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool _suppressFlowWindowsIdentity; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool _suppressFlow; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
