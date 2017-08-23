#pragma once

#include "..\System\IO\InotifyMask.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
	class InotifyEvent : public ValueType // 0x0
	{
	public:
		int WatchDescriptor; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		System::IO::InotifyMask Mask; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* Name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
