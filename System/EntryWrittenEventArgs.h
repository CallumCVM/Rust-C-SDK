#pragma once

#include "..\System\Diagnostics\EventLogEntry.h"

namespace System
{
	namespace Diagnostics
{
	class EntryWrittenEventArgs : public EventArgs // 0x0
	{
	public:
		System::Diagnostics::EventLogEntry* entry; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
