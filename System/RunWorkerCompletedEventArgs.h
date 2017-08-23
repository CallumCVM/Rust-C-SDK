#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace ComponentModel
{
	class RunWorkerCompletedEventArgs : public AsyncCompletedEventArgs // 0x28
	{
	public:
		System::Object result; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x30
}
