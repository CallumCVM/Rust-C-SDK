#pragma once

#include "..\System\Type.h"
#include "..\System\Reflection\PropertyInfo.h"

namespace System
{
	namespace ComponentModel
{
	class DerivedPropertyDescriptor : public PropertyDescriptor // 0x38
	{
	public:
		System::Type* componentType; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* propertyType; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::PropertyInfo* prop; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool readOnly; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
