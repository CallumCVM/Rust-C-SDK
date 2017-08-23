#pragma once

#include "..\System\ComponentModel\TypeConverter\StandardValuesCollection.h"

namespace System
{
	namespace ComponentModel
{
	class CultureInfoConverter : public TypeConverter // 0x0
	{
	public:
		System::ComponentModel::TypeConverter::StandardValuesCollection* _standardValues; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
