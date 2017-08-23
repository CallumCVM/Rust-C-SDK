#pragma once

#include "..\System\Threading\ManualResetEvent.h"
#include "..\System\AsyncCallback.h"
#include "..\System\Object.h"
#include "..\System\Exception.h"
#include "..\System\Net\HttpListenerContext.h"
#include "..\System\Net\ListenerAsyncResult.h"

namespace System
{
	namespace Net
{
	class ListenerAsyncResult : public Object // 0x0
	{
	public:
		System::Threading::ManualResetEvent* handle; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::AsyncCallback* cb; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object state; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Exception* exception; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::HttpListenerContext* context; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object locker; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Net::ListenerAsyncResult* forward; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool synch; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool completed; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
