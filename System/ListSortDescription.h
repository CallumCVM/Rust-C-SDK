#pragma once

#include "..\System\ComponentModel\PropertyDescriptor.h"
#include "..\System\ComponentModel\ListSortDirection.h"

namespace System
{
	namespace ComponentModel
{
	class ListSortDescription : public Object // 0x0
	{
	public:
		System::ComponentModel::PropertyDescriptor* propertyDescriptor; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::ListSortDirection sortDirection; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
