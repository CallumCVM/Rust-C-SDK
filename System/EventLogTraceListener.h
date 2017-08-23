#pragma once

#include "..\System\Diagnostics\EventLog.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class EventLogTraceListener : public TraceListener // 0x40
	{
	public:
		System::Diagnostics::EventLog* event_log; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x50
}
