#pragma once

#include "..\System\Type.h"
#include "..\System\ComponentModel\TypeConverter.h"

namespace System
{
	namespace ComponentModel
{
	class NullableConverter : public TypeConverter // 0x0
	{
	public:
		System::Type* nullableType; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* underlyingType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::TypeConverter* underlyingTypeConverter; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
