#pragma once

#include "..\System\Attribute.h"

namespace rust 
{
	class AttributeTypeDescriptor : public CustomTypeDescriptor // 0x18
	{
	public:
		System::Attribute* attributes; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
