#pragma once

#include "..\System\Diagnostics\EventLogImpl.h"

namespace System
{
	namespace Diagnostics
{
	class EventLogEntryCollection : public Object // 0x0
	{
	public:
		System::Diagnostics::EventLogImpl* _impl; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x18
}
