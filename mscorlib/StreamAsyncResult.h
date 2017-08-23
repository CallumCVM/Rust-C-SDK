#pragma once

#include "..\System\Object.h"
#include "..\System\Exception.h"
#include "..\System\Threading\ManualResetEvent.h"

namespace System
{
	namespace IO
{
	class StreamAsyncResult : public Object // 0x0
	{
	public:
		System::Object state; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		bool completed; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool done; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
		System::Exception* exc; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int nbytes; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		System::Threading::ManualResetEvent* wh; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
