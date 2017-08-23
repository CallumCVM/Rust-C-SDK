#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace ComponentModel
{
	class DoWorkEventArgs : public CancelEventArgs // 0x18
	{
	public:
		System::Object arg; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object result; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x28
}
