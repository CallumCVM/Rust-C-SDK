#pragma once

#include "..\System\Diagnostics\SourceLevels.h"

namespace System
{
	namespace Diagnostics
{
	class EventTypeFilter : public TraceFilter // 0x0
	{
	public:
		System::Diagnostics::SourceLevels event_type; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
