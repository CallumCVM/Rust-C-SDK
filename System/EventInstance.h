#pragma once

#include "..\System\Diagnostics\EventLogEntryType.h"

namespace System
{
	namespace Diagnostics
{
	class EventInstance : public Object // 0x0
	{
	public:
		int _categoryId; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		System::Diagnostics::EventLogEntryType _entryType; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
		__int64 _instanceId; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x20
}
