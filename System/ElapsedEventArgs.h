#pragma once

#include "..\System\DateTime.h"

namespace System
{
	namespace Timers
{
	class ElapsedEventArgs : public EventArgs // 0x0
	{
	public:
		System::DateTime time; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
