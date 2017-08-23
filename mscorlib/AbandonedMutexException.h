#pragma once

#include "..\System\Threading\Mutex.h"

namespace System
{
	namespace Threading
{
	class AbandonedMutexException : public SystemException // 0x60
	{
	public:
		System::Threading::Mutex* mutex; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		int mutex_index; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
