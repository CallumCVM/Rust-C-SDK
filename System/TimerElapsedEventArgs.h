#pragma once

namespace Microsoft
{
	namespace Win32
{
	class TimerElapsedEventArgs : public EventArgs // 0x0
	{
	public:
		__int64 mytimerId; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x18
}
