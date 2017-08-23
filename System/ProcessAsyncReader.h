#pragma once

#include "..\System\Object.h"
#include "..\System\AsyncCallback.h"
#include "..\System\Threading\ManualResetEvent.h"
#include "..\System\Exception.h"
#include "..\System\Diagnostics\Process.h"
#include "..\System\IO\Stream.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Diagnostics\Process\AsyncReadHandler.h"

namespace rust 
{
	class ProcessAsyncReader : public Object // 0x0
	{
	public:
		System::Object Sock; // 0x10 (size: 0x8, flags: 0x6, type: 0x1c)
		__int64 handle; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		System::Object state; // 0x20 (size: 0x8, flags: 0x6, type: 0x1c)
		System::AsyncCallback* callback; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::Threading::ManualResetEvent* wait_handle; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		System::Exception* delayedException; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		System::Object EndPoint; // 0x40 (size: 0x8, flags: 0x6, type: 0x1c)
		unsigned char* buffer; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		int Offset; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
		int Size; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
		int SockFlags; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		System::Object AcceptSocket; // 0x60 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Object* Addresses; // 0x68 (size: 0x8, flags: 0x6, type: 0x1d)
		int port; // 0x70 (size: 0x4, flags: 0x6, type: 0x8)
		System::Object Buffers; // 0x78 (size: 0x8, flags: 0x6, type: 0x1c)
		bool ReuseSocket; // 0x80 (size: 0x1, flags: 0x6, type: 0x2)
		System::Object acc_socket; // 0x88 (size: 0x8, flags: 0x6, type: 0x1c)
		int total; // 0x90 (size: 0x4, flags: 0x6, type: 0x8)
		bool completed_sync; // 0x94 (size: 0x1, flags: 0x6, type: 0x2)
		bool completed; // 0x95 (size: 0x1, flags: 0x1, type: 0x2)
		bool err_out; // 0x96 (size: 0x1, flags: 0x1, type: 0x2)
		int error; // 0x98 (size: 0x4, flags: 0x3, type: 0x8)
		int operation; // 0x9c (size: 0x4, flags: 0x6, type: 0x8)
		System::Object ares; // 0xa0 (size: 0x8, flags: 0x6, type: 0x1c)
		int EndCalled; // 0xa8 (size: 0x4, flags: 0x6, type: 0x8)
		System::Diagnostics::Process* process; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* stream; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* sb; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::Process::AsyncReadHandler* ReadHandler; // 0xc8 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0xd0
}
