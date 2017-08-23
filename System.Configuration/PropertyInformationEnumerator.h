#pragma once

#include "..\System\Configuration\PropertyInformationCollection.h"

namespace rust 
{
	class PropertyInformationEnumerator : public Object // 0x0
	{
	public:
		System::Configuration::PropertyInformationCollection* collection; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int position; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
