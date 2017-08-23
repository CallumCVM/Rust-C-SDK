#pragma once

#include "..\System\ComponentModel\ListChangedType.h"
#include "..\System\ComponentModel\PropertyDescriptor.h"

namespace System
{
	namespace ComponentModel
{
	class ListChangedEventArgs : public EventArgs // 0x0
	{
	public:
		System::ComponentModel::PropertyDescriptor* propDesc; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::ListChangedType changedType; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		int oldIndex; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int newIndex; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
