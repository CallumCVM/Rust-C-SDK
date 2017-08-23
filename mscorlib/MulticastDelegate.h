#pragma once

#include "..\System\MulticastDelegate.h"

namespace System
{
	class MulticastDelegate : public Delegate // 0x58
	{
	public:
		System::MulticastDelegate* prev; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::MulticastDelegate* kpm_next; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
