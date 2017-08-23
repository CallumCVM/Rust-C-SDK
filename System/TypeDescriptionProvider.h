#pragma once

#include "..\System\ComponentModel\TypeDescriptionProvider\EmptyCustomTypeDescriptor.h"
#include "..\System\ComponentModel\TypeDescriptionProvider.h"

namespace System
{
	namespace ComponentModel
{
	class TypeDescriptionProvider : public Object // 0x0
	{
	public:
		System::ComponentModel::TypeDescriptionProvider::EmptyCustomTypeDescriptor* _emptyCustomTypeDescriptor; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::TypeDescriptionProvider* _parent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
