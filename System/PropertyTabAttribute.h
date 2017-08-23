#pragma once

#include "..\System\Type.h"
#include "..\System\ComponentModel\PropertyTabScope.h"

namespace System
{
	namespace ComponentModel
{
	class PropertyTabAttribute : public Attribute // 0x0
	{
	public:
		System::Type* tabs; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::ComponentModel::PropertyTabScope* scopes; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
