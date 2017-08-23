#pragma once

#include "..\System\Exception.h"

namespace System
{
	namespace IO
{
	class ErrorEventArgs : public EventArgs // 0x0
	{
	public:
		System::Exception* exception; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
