#pragma once

#include "..\System\Diagnostics\EventLogPermission.h"

namespace System
{
	namespace Diagnostics
{
	class EventLogPermissionEntryCollection : public CollectionBase // 0x18
	{
	public:
		System::Diagnostics::EventLogPermission* owner; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
