#pragma once

#include "..\System\Action.h"

namespace rust 
{
	class RecycledOneTimeAction : public Object // 0x0
	{
	public:
		System::Action* _action; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
