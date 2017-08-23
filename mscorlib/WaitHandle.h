#pragma once

#include "..\Microsoft\Win32\SafeHandles\SafeWaitHandle.h"

namespace System
{
	namespace Threading
{
	class WaitHandle : public MarshalByRefObject // 0x18
	{
	public:
		Microsoft::Win32::SafeHandles::SafeWaitHandle* safe_wait_handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool disposed; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
