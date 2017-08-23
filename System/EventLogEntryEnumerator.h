#pragma once

#include "..\System\Diagnostics\EventLogImpl.h"
#include "..\System\Diagnostics\EventLogEntry.h"

namespace rust 
{
	class EventLogEntryEnumerator : public Object // 0x0
	{
	public:
		System::Diagnostics::EventLogImpl* _impl; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Diagnostics::EventLogEntry* _currentEntry; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int _currentIndex; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
