#pragma once

#include "..\System\Threading\Thread.h"
#include "..\System\Threading\AsyncFlowControlType.h"

namespace System
{
	namespace Threading
{
	class AsyncFlowControl : public ValueType // 0x0
	{
	public:
		System::Threading::Thread* _t; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::AsyncFlowControlType _type; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
