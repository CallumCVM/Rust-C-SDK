#pragma once

#include "..\System\ComponentModel\AddingNewEventHandler.h"
#include "..\System\ComponentModel\ListChangedEventHandler.h"

namespace System
{
	namespace ComponentModel
{
		template <typename T0>
	class BindingList : public Collection`1 // 0x20
	{
	public:
		System::ComponentModel::AddingNewEventHandler* AddingNew; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::ListChangedEventHandler* ListChanged; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool allow_edit; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool allow_remove; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		bool allow_new; // 0x32 (size: 0x1, flags: 0x1, type: 0x2)
		bool allow_new_set; // 0x33 (size: 0x1, flags: 0x1, type: 0x2)
		bool raise_list_changed_events; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
		bool type_has_default_ctor; // 0x35 (size: 0x1, flags: 0x1, type: 0x2)
		bool type_raises_item_changed_events; // 0x36 (size: 0x1, flags: 0x1, type: 0x2)
		bool add_pending; // 0x37 (size: 0x1, flags: 0x1, type: 0x2)
		int pending_add_index; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
