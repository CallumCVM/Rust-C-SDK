#pragma once

#include "..\System\ComponentModel\NotifyCollectionChangedAction.h"
#include "..\System\Collections\IList.h"

namespace System
{
	namespace ComponentModel
{
	class NotifyCollectionChangedEventArgs : public Object // 0x0
	{
	public:
		System::Collections::IList* <NewItems>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IList* <OldItems>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::NotifyCollectionChangedAction <Action>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		int <NewStartingIndex>k__BackingField; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int <OldStartingIndex>k__BackingField; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
