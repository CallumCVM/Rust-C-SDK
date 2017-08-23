#pragma once

#include "..\System\Type.h"
#include "..\System\ComponentModel\TypeConverter\StandardValuesCollection.h"

namespace System
{
	namespace ComponentModel
{
	class EnumConverter : public TypeConverter // 0x0
	{
	public:
		System::Type* type; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::TypeConverter::StandardValuesCollection* stdValues; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
