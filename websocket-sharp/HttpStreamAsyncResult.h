#pragma once

#include "..\System\AsyncCallback.h"
#include "..\System\Exception.h"
#include "..\System\Object.h"
#include "..\System\Threading\ManualResetEvent.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpStreamAsyncResult : public Object // 0x0
	{
	public:
		unsigned char* _buffer; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::AsyncCallback* _callback; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Exception* _exception; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _state; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object _sync; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::ManualResetEvent* _waitHandle; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool _completed; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		int _count; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		int _offset; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		int _syncRead; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
