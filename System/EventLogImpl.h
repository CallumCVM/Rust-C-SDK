#pragma once

#include "..\System\Diagnostics\EventLog.h"

namespace System
{
	namespace Diagnostics
{
	class EventLogImpl : public Object // 0x0
	{
	public:
		System::Diagnostics::EventLog* _coreEventLog; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x18
}
