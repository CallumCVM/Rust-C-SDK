#pragma once

#include "..\System\Net\FtpWebResponse.h"
#include "..\System\Threading\ManualResetEvent.h"
#include "..\System\Exception.h"
#include "..\System\AsyncCallback.h"
#include "..\System\IO\Stream.h"
#include "..\System\Object.h"

namespace System
{
	namespace Net
{
	class FtpAsyncResult : public Object // 0x0
	{
	public:
		System::Net::FtpWebResponse* response; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::ManualResetEvent* waitHandle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Exception* exception; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::AsyncCallback* callback; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* stream; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object state; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object locker; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		bool completed; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool synch; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
