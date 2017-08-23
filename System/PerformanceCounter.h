#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Diagnostics\PerformanceCounterType.h"
#include "..\System\Diagnostics\CounterSample.h"
#include "..\System\Diagnostics\PerformanceCounterInstanceLifetime.h"

namespace System
{
	namespace Diagnostics
{
	class PerformanceCounter : public Component // 0x30
	{
	public:
		UnityEngine::UnicodeString* categoryName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* counterName; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* instanceName; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* machineName; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		__int64 impl; // 0x50 (size: 0x8, flags: 0x1, type: 0x18)
		System::Diagnostics::PerformanceCounterType type; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
		System::Diagnostics::CounterSample old_sample; // 0x60 (size: 0x40, flags: 0x1, type: 0x11)
		bool readOnly; // 0xa0 (size: 0x1, flags: 0x1, type: 0x2)
		bool valid_old; // 0xa1 (size: 0x1, flags: 0x1, type: 0x2)
		bool changed; // 0xa2 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_custom; // 0xa3 (size: 0x1, flags: 0x1, type: 0x2)
		System::Diagnostics::PerformanceCounterInstanceLifetime lifetime; // 0xa4 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xa8
}
