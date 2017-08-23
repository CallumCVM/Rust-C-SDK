#pragma once

#include "..\System\Object.h"
#include "..\System\Delegate.h"
#include "..\System\ComponentModel\ListEntry.h"

namespace System
{
	namespace ComponentModel
{
	class ListEntry : public Object // 0x0
	{
	public:
		System::Object key; // 0x10 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Delegate* value; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::ComponentModel::ListEntry* next; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
