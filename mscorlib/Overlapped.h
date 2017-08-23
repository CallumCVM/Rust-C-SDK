#pragma once

#include "..\System\IAsyncResult.h"

namespace System
{
	namespace Threading
{
	class Overlapped : public Object // 0x0
	{
	public:
		System::IAsyncResult* ares; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int offsetL; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int offsetH; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int evt; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 evt_ptr; // 0x28 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x30
}
