#pragma once

#include "..\System\ComponentModel\ListEntry.h"
#include "..\System\Delegate.h"

namespace System
{
	namespace ComponentModel
{
	class EventHandlerList : public Object // 0x0
	{
	public:
		System::ComponentModel::ListEntry* entries; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Delegate* null_entry; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
