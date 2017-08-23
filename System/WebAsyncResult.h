#pragma once

#include "..\System\Threading\ManualResetEvent.h"
#include "..\System\AsyncCallback.h"
#include "..\System\Object.h"
#include "..\System\IAsyncResult.h"
#include "..\System\Exception.h"
#include "..\System\Net\HttpWebResponse.h"
#include "..\System\IO\Stream.h"

namespace System
{
	namespace Net
{
	class WebAsyncResult : public Object // 0x0
	{
	public:
		System::Threading::ManualResetEvent* handle; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::AsyncCallback* cb; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object state; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		System::IAsyncResult* innerAsyncResult; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Exception* exc; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::HttpWebResponse* response; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* writeStream; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* buffer; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object locker; // 0x50 (size: 0x8, flags: 0x1, type: 0x1c)
		bool synch; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		bool isCompleted; // 0x59 (size: 0x1, flags: 0x1, type: 0x2)
		int nbytes; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		bool callbackDone; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
		int offset; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		int size; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		bool EndCalled; // 0x6c (size: 0x1, flags: 0x6, type: 0x2)
		bool AsyncWriteAll; // 0x6d (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x70
}
