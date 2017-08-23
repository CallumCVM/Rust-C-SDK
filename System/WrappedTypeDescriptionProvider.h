#pragma once

#include "..\System\ComponentModel\TypeDescriptionProvider.h"

namespace rust 
{
	class WrappedTypeDescriptionProvider : public TypeDescriptionProvider // 0x20
	{
	public:
		System::ComponentModel::TypeDescriptionProvider* <Wrapped>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
