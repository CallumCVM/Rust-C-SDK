#pragma once

#include "..\System\Threading\Timer.h"
#include "..\System\Object.h"
#include "..\System\ComponentModel\ISynchronizeInvoke.h"
#include "..\System\Timers\ElapsedEventHandler.h"

namespace System
{
	namespace Timers
{
	class Timer : public Component // 0x30
	{
	public:
		System::Threading::Timer* timer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _lock; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
		System::ComponentModel::ISynchronizeInvoke* so; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Timers::ElapsedEventHandler* Elapsed; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		double interval; // 0x50 (size: 0x8, flags: 0x1, type: 0xd)
		bool autoReset; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
