#pragma once

#include "..\System\Object.h"

namespace System
{
	class UnhandledExceptionEventArgs : public EventArgs // 0x0
	{
	public:
		System::Object exception; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		bool m_isTerminating; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
