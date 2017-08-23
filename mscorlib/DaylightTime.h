#pragma once

#include "..\System\DateTime.h"
#include "..\System\TimeSpan.h"

namespace System
{
	namespace Globalization
{
	class DaylightTime : public Object // 0x0
	{
	public:
		System::DateTime m_start; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime m_end; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
		System::TimeSpan m_delta; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
