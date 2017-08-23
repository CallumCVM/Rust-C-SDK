#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Diagnostics\PerformanceCounterType.h"

namespace System
{
	namespace Diagnostics
{
	class CounterCreationData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* help; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Diagnostics::PerformanceCounterType type; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
