#pragma once

#include "..\System\Object.h"

namespace Facepunch
{
	class ObjectList : public ValueType // 0x0
	{
	public:
		System::Object object0; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object object1; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object object2; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object object3; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object object4; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x38
}
