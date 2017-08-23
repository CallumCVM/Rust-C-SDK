#pragma once

#include "..\System\ActivationContext\ContextForm.h"
#include "..\System\ApplicationIdentity.h"

namespace System
{
	class ActivationContext : public Object // 0x0
	{
	public:
		System::ActivationContext::ContextForm _form; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::ApplicationIdentity* _appid; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool _disposed; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
