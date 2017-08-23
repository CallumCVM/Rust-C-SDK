#pragma once

#include "..\Microsoft\Win32\PowerModes.h"

namespace Microsoft
{
	namespace Win32
{
	class PowerModeChangedEventArgs : public EventArgs // 0x0
	{
	public:
		Microsoft::Win32::PowerModes mymode; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
