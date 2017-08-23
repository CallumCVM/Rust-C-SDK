#pragma once

#include "..\Microsoft\Win32\SessionEndReasons.h"

namespace Microsoft
{
	namespace Win32
{
	class SessionEndedEventArgs : public EventArgs // 0x0
	{
	public:
		Microsoft::Win32::SessionEndReasons myreason; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
