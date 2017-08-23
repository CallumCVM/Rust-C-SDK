#pragma once

#include "..\System\Diagnostics\PerformanceCounterPermission.h"

namespace System
{
	namespace Diagnostics
{
	class PerformanceCounterPermissionEntryCollection : public CollectionBase // 0x18
	{
	public:
		System::Diagnostics::PerformanceCounterPermission* owner; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
