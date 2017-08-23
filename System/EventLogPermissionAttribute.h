#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Diagnostics\EventLogPermissionAccess.h"

namespace System
{
	namespace Diagnostics
{
	class EventLogPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* machineName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Diagnostics::EventLogPermissionAccess permissionAccess; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
