#pragma once

#include "..\System\Action.h"

namespace rust 
{
	class StateTimer : public ValueType // 0x0
	{
	public:
		float ReleaseTime; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		System::Action* OnFinished; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
