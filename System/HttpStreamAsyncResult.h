#pragma once

#include "..\System\Object.h"
#include "..\System\Threading\ManualResetEvent.h"
#include "..\System\AsyncCallback.h"
#include "..\System\Exception.h"

namespace System
{
	namespace Net
{
	class HttpStreamAsyncResult : public Object // 0x0
	{
	public:
		System::Object locker; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::ManualResetEvent* handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* Buffer; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
		System::AsyncCallback* Callback; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		System::Object State; // 0x30 (size: 0x8, flags: 0x3, type: 0x1c)
		System::Exception* Error; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		bool completed; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		int Offset; // 0x44 (size: 0x4, flags: 0x3, type: 0x8)
		int Count; // 0x48 (size: 0x4, flags: 0x3, type: 0x8)
		int SynchRead; // 0x4c (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x50
}
