#pragma once

#include "..\System\Collections\Stack.h"

namespace rust 
{
	class SyncStack : public Stack // 0x28
	{
	public:
		System::Collections::Stack* stack; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
