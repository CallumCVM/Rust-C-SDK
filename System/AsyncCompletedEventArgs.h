#pragma once

#include "..\System\Exception.h"
#include "..\System\Object.h"

namespace System
{
	namespace ComponentModel
{
	class AsyncCompletedEventArgs : public EventArgs // 0x0
	{
	public:
		System::Exception* _error; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _userState; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		bool _cancelled; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
