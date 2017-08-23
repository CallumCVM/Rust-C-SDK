#pragma once

#include "..\System\ComponentModel\TypeConverter.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace ComponentModel
{
	class PropertyDescriptor : public MemberDescriptor // 0x28
	{
	public:
		System::ComponentModel::TypeConverter* converter; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* notifiers; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
