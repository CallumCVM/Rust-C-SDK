#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Diagnostics\PerformanceCounterCategoryType.h"

namespace System
{
	namespace Diagnostics
{
	class PerformanceCounterCategory : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* categoryName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* machineName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Diagnostics::PerformanceCounterCategoryType type; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
