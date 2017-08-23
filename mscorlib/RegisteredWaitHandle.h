#pragma once

#include "..\System\Threading\WaitHandle.h"
#include "..\System\Threading\WaitOrTimerCallback.h"
#include "..\System\TimeSpan.h"
#include "..\System\Object.h"
#include "..\System\Threading\ManualResetEvent.h"

namespace System
{
	namespace Threading
{
	class RegisteredWaitHandle : public MarshalByRefObject // 0x18
	{
	public:
		System::Threading::WaitHandle* _waitObject; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::WaitOrTimerCallback* _callback; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::TimeSpan _timeout; // 0x28 (size: 0x8, flags: 0x1, type: 0x11)
		System::Object _state; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		bool _executeOnlyOnce; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		System::Threading::WaitHandle* _finalEvent; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::ManualResetEvent* _cancelEvent; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int _callsInProcess; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		bool _unregistered; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
