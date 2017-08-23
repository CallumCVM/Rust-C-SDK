#pragma once

#include "..\System\Diagnostics\EventLogPermissionAccess.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class EventLogPermissionEntry : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* machineName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Diagnostics::EventLogPermissionAccess permissionAccess; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
