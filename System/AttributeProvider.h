#pragma once

#include "..\System\Attribute.h"

namespace rust 
{
	class AttributeProvider : public TypeDescriptionProvider // 0x20
	{
	public:
		System::Attribute* attributes; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
