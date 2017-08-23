#pragma once

#include "..\System\ComponentModel\TypeDescriptionProvider.h"
#include "..\System\Type.h"
#include "..\System\Object.h"

namespace rust 
{
	class DefaultTypeDescriptor : public CustomTypeDescriptor // 0x18
	{
	public:
		System::ComponentModel::TypeDescriptionProvider* owner; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* objectType; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object instance; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x30
}
