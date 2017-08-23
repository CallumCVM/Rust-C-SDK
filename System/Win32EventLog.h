#pragma once

#include "..\System\Threading\ManualResetEvent.h"
#include "..\System\Threading\Thread.h"

namespace System
{
	namespace Diagnostics
{
	class Win32EventLog : public EventLogImpl // 0x18
	{
	public:
		System::Threading::ManualResetEvent* _notifyResetEvent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::Thread* _notifyThread; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 _readHandle; // 0x28 (size: 0x8, flags: 0x1, type: 0x18)
		int _lastEntryWritten; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		bool _notifying; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
