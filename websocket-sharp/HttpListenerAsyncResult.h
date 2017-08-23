#pragma once

#include "..\System\AsyncCallback.h"
#include "..\WebSocketSharp\Net\HttpListenerContext.h"
#include "..\System\Exception.h"
#include "..\System\Object.h"
#include "..\System\Threading\ManualResetEvent.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpListenerAsyncResult : public Object // 0x0
	{
	public:
		System::AsyncCallback* _callback; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::HttpListenerContext* _context; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Exception* _exception; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _state; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object _sync; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::ManualResetEvent* _waitHandle; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool _completed; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool _endCalled; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
		bool _inGet; // 0x42 (size: 0x1, flags: 0x1, type: 0x2)
		bool _syncCompleted; // 0x43 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
