#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace ComponentModel
{
	class ProgressChangedEventArgs : public EventArgs // 0x0
	{
	public:
		System::Object state; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		int progress; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
