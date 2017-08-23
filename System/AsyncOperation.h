#pragma once

#include "..\System\Threading\SynchronizationContext.h"
#include "..\System\Object.h"

namespace System
{
	namespace ComponentModel
{
	class AsyncOperation : public Object // 0x0
	{
	public:
		System::Threading::SynchronizationContext* ctx; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object state; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		bool done; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
