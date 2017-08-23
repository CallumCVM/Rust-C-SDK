#pragma once

#include "..\System\ComponentModel\PropertyDescriptor.h"
#include "..\System\ComponentModel\IExtenderProvider.h"
#include "..\System\Type.h"

namespace System
{
	namespace ComponentModel
{
	class ExtenderProvidedPropertyAttribute : public Attribute // 0x0
	{
	public:
		System::ComponentModel::PropertyDescriptor* extender; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::IExtenderProvider* extenderProvider; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* receiver; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
