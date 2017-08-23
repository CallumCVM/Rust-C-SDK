#pragma once

#include "InputMessage.h"

namespace rust 
{
	class InputState : public Object // 0x0
	{
	public:
		InputMessage* current; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		InputMessage* previous; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int SwallowedButtons; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
