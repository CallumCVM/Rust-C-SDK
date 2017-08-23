#pragma once

#include "..\System\ComponentModel\ICustomTypeDescriptor.h"

namespace System
{
	namespace ComponentModel
{
	class CustomTypeDescriptor : public Object // 0x0
	{
	public:
		System::ComponentModel::ICustomTypeDescriptor* _parent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
