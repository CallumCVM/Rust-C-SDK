#pragma once

#include "..\System\Object.h"

namespace rust 
{
	class SynchronizedListWrapper : public ListWrapper // 0x18
	{
	public:
		System::Object m_SyncRoot; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x20
}
