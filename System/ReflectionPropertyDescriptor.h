#pragma once

#include "..\System\Reflection\PropertyInfo.h"
#include "..\System\Type.h"

namespace System
{
	namespace ComponentModel
{
	class ReflectionPropertyDescriptor : public PropertyDescriptor // 0x38
	{
	public:
		System::Reflection::PropertyInfo* _member; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _componentType; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _propertyType; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::PropertyInfo* getter; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::PropertyInfo* setter; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		bool accessors_inited; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
