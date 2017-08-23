#pragma once

#include "..\System\Object.h"

namespace rust 
{
	class SynchronizedArrayListWrapper : public ArrayListWrapper // 0x30
	{
	public:
		System::Object m_SyncRoot; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x38
}
