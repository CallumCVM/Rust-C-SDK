#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Diagnostics\PerformanceCounterPermissionAccess.h"

namespace System
{
	namespace Diagnostics
{
	class PerformanceCounterPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* categoryName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* machineName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Diagnostics::PerformanceCounterPermissionAccess permissionAccess; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
