#pragma once

#include "..\System\ComponentModel\PropertyDescriptor.h"
#include "..\System\Object.h"

namespace rust 
{
	class WrappedPropertyDescriptor : public PropertyDescriptor // 0x38
	{
	public:
		System::ComponentModel::PropertyDescriptor* _property; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _component; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x48
}
