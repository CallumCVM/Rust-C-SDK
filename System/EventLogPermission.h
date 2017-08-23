#pragma once

#include "..\System\Diagnostics\EventLogPermissionEntryCollection.h"

namespace System
{
	namespace Diagnostics
{
	class EventLogPermission : public ResourcePermissionBase // 0x30
	{
	public:
		System::Diagnostics::EventLogPermissionEntryCollection* innerCollection; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
