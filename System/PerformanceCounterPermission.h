#pragma once

#include "..\System\Diagnostics\PerformanceCounterPermissionEntryCollection.h"

namespace System
{
	namespace Diagnostics
{
	class PerformanceCounterPermission : public ResourcePermissionBase // 0x30
	{
	public:
		System::Diagnostics::PerformanceCounterPermissionEntryCollection* innerCollection; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
