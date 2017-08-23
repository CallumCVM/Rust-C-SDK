#pragma once

#include "..\System\Object.h"
#include "..\System\Type.h"

namespace System
{
	namespace ComponentModel
{
	class RefreshEventArgs : public EventArgs // 0x0
	{
	public:
		System::Object component; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Type* type; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
