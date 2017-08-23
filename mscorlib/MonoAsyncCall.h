#pragma once

#include "..\System\Object.h"

namespace System
{
	class MonoAsyncCall : public Object // 0x0
	{
	public:
		System::Object msg; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		__int64 cb_method; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		System::Object cb_target; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object state; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object res; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object out_args; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
		__int64 wait_event; // 0x40 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x48
}
