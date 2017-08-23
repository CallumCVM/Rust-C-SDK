#pragma once

#include "..\System\Type.h"
#include "..\System\ComponentModel\EventDescriptor.h"
#include "..\System\ComponentModel\PropertyDescriptor.h"
#include "..\System\ComponentModel\AttributeCollection.h"

namespace System
{
	namespace ComponentModel
{
	class Info : public Object // 0x0
	{
	public:
		System::Type* _infoType; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::EventDescriptor* _defaultEvent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::PropertyDescriptor* _defaultProperty; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::AttributeCollection* _attributes; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool _gotDefaultEvent; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool _gotDefaultProperty; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
