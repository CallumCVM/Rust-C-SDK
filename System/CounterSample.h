#pragma once

#include "..\System\Diagnostics\PerformanceCounterType.h"

namespace System
{
	namespace Diagnostics
{
	class CounterSample : public ValueType // 0x0
	{
	public:
		__int64 rawValue; // 0x10 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 baseValue; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 counterFrequency; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 systemFrequency; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 timeStamp; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 timeStamp100nSec; // 0x38 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 counterTimeStamp; // 0x40 (size: 0x8, flags: 0x1, type: 0xa)
		System::Diagnostics::PerformanceCounterType counterType; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
