#pragma once

#include "..\System\IO\FileAccess.h"
#include "..\System\EventHandler.h"

namespace System
{
	namespace IO
{
	class UnmanagedMemoryStream : public Stream // 0x18
	{
	public:
		__int64 length; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
		bool closed; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 capacity; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		System::IO::FileAccess fileaccess; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		__int64 initial_pointer; // 0x38 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 initial_position; // 0x40 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 current_position; // 0x48 (size: 0x8, flags: 0x1, type: 0xa)
		System::EventHandler* Closed; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
