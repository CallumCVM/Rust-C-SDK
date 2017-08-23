#pragma once

#include "..\System\Object.h"
#include "..\System\Exception.h"
#include "..\System\Threading\ManualResetEvent.h"
#include "..\System\AsyncCallback.h"

namespace System
{
	namespace IO
{
	class FileStreamAsyncResult : public Object // 0x0
	{
	public:
		System::Object state; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		bool completed; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool done; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
		System::Exception* exc; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::ManualResetEvent* wh; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::AsyncCallback* cb; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool completedSynch; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* Buffer; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		int Offset; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		int Count; // 0x4c (size: 0x4, flags: 0x6, type: 0x8)
		int OriginalCount; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
		int BytesRead; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
		System::AsyncCallback* realcb; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
