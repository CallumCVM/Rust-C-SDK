#pragma once

#include "..\System\ComponentModel\CollectionChangeAction.h"
#include "..\System\Object.h"

namespace System
{
	namespace ComponentModel
{
	class CollectionChangeEventArgs : public EventArgs // 0x0
	{
	public:
		System::Object theElement; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::ComponentModel::CollectionChangeAction changeAction; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
